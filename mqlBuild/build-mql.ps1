#gets the File To Compile as an external parameter... Defaults to a Test file...
Param( $MetaTraderExecutable, $FileToCompile, $IncludeFolder )

#cleans the terminal screen and sets the log file name...
Clear-Host

Function Test-IsFileLocked {
    [cmdletbinding()]
    Param (
        [parameter(Mandatory = $True, ValueFromPipeline = $True, ValueFromPipelineByPropertyName = $True)]
        [Alias('FullName', 'PSPath')]
        [string[]]$Path
    )
    Process {
        ForEach ($Item in $Path) {
            #Ensure this is a full path
            $Item = Convert-Path $Item
            #Verify that this is a file and not a directory
            If ([System.IO.File]::Exists($Item)) {
                Try {
                    $FileStream = [System.IO.File]::Open($Item, 'Open', 'Write')
                    $FileStream.Close()
                    $FileStream.Dispose()
                    $IsLocked = $False
                }
                Catch [System.UnauthorizedAccessException] {
                    $IsLocked = 'AccessDenied'
                }
                Catch {
                    $IsLocked = $True
                }
                [pscustomobject]@{
                    File     = $Item
                    IsLocked = $IsLocked
                }
            }
        }
    }
}

$LogFile = $FileToCompile + ".log"
if (Test-Path $LogFile) {
    Remove-Item $LogFile -Force | Out-Null
}

#before continue check if the Compile File has any spaces in it...
# if ($FileToCompile.Contains(" ")) {
#     "";"";
#     Write-Host "ERROR!  Impossible to Compile! Your Filename or Path contains SPACES!" -ForegroundColor Red;
#     "";
#     Write-Host $FileToCompile -ForegroundColor Red;
#     "";"";
#     return;
# }

#fires up the Metaeditor compiler...
& "$MetaTraderExecutable" /compile:"$FileToCompile" /log:"$LogFile" /inc:"$IncludeFolder" 
$counter = 10;
while (!(Test-Path $LogFile) -and $counter -lt 100) { 
    Start-Sleep 1
    $counter += 1
}
#get some clean real state and tells the user what is being compiled (just the file name, no path)...

$JustTheFileName = Split-Path $FileToCompile -Leaf
Write-Host "Compiling........: $JustTheFileName`n"

while ((Test-IsFileLocked $LogFile).IsLocked ) {
    Start-Sleep 1
}

#reads the log file. Eliminates the blank lines. Skip the first line because it is useless.
$Log = Get-Content $LogFile 

# | Where-Object { $_ -ne "" } | Select-Object -Skip 1

#Green color for successful Compilation. Otherwise (error/warning), Red!
$WhichColor = "Red"
$Log | ForEach-Object { 
    if ($_ -match ("0 error.*, 0 warning.*")) { $WhichColor = "Green" } 
}

#runs through all the log lines...
$Log | ForEach-Object {
    #ignores the ": information: error generating code" line when ME was successful
    if (-Not $_.Contains("information:")) {
        #common log line... just print it...
        Write-Host $_ -ForegroundColor $WhichColor
    }
}

# Write-Host $WhichColor

$terminalPath = Split-Path $MetaTraderExecutable 
Write-Host $terminalPath
#get the MT Terminal back if all went well...
if ( $WhichColor -eq "Green") { 
    Write-Host "`nBuild was successful. Restarting terminal ..." -ForegroundColor $WhichColor
    #first of all, kill MT Terminal (if running)... otherwise it will not see the new compiled version of the code...
    $runningTerminal = Get-Process -Name "*terminal*"  | where-object { $_.path -match $([regex]::escape($terminalPath)) } | Select-Object  Id, path
    # Stop-Process $runningTerminal.Id

    if ($null -eq $runningTerminal) {
        
        Write-Warning ("`n`n`n`tBuild was sucessful ...`n`tBut couldn't find your terminal to refresh it. if you wish to automatically refresh it just keep it open `n`n");
        
    }

    & $runningTerminal.Path

}
else {
    Write-Host "`nBuild Failed." -ForegroundColor $WhichColor
}

Remove-Item $LogFile | Out-Null