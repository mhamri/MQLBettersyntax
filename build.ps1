[CmdletBinding()]
param (
        
)

$hasNamespace = $true
function Get-FilesContent ($directory) {

    Write-Information "getting content of $directory"

    $sb = [System.Text.StringBuilder]::new()
    $files = Get-ChildItem $directory -Filter "*.h"

    foreach ($file in $files) {
        $fileContet = (Get-Content $file -Raw) -replace "#include <.*>", "" -replace "#include .*", "" -replace "using namespace std;", ""

        [void]$sb.Append($fileContet)
        [void]$sb.Append("`n")
    }
    
    return $sb.ToString() 
    
}

function Recurse-Folder($folder) {
    Write-Information "parsing $folder"

    $sb = [System.Text.StringBuilder]::new()
    $directories = Get-ChildItem -Path $folder -Directory
    
    
    foreach ($directory in $directories) {
        $namespace = "φ" + (Convert-Path $directory | Get-Item | Select-Object Name).Name -replace " ", "_"
        Write-Information "namespace is $namespace"
        Write-Information "creating namespace for $directory"

        if ($hasNamespace) {
            [void]$sb.Append("namespace $namespace`n")
            [void]$sb.Append("{`n")
        }

        $childContent = Recurse-Folder $directory
        
        if ($hasNamespace) {
            Write-Information "adding space for $namespace"
            [void]$sb.Append((($childContent -split "`r?`n" ) | ForEach-Object { "`t" + $_ } | Out-String))
            [void]$sb.Append("}`n")
            [void]$sb.Append("using namespace $namespace;`n`n")
        }
        else {
            [void]$sb.Append(($childContent | Out-String))
        }    
    }

    [void]$sb.Append((Get-FilesContent $folder))
    return $sb.ToString()
}

try {
    Push-Location
    Set-Location "./src"
    $sb = [System.Text.StringBuilder]::new()
    [void]$sb.Append("
/**
 * @author Mohammad Hossein Amri (mhamri.com)
 * 
 * @file MQLBetterSyntax.mqh
 * @date $(Get-Date -Format "yyyy-MM-d")
 * 
 * @brief an attempt to document MQL4(MT4) API 
 * 			for latest version please visit https://github.com/mhamri/MQLBettersyntax
 * 
 * @copyright Copyright (c) 2021 Mohammad Hossein Amri
 * @copydoc https://raw.githubusercontent.com/mhamri/MQLBettersyntax/main/LICENSE
 */

#include <iostream>
using namespace std;
`n")

    [void]$sb.Append((Recurse-Folder "." | Out-String)) 

    $sb.ToString().Trim() -replace "\s+`r?`n\s+`r?`n", "`n`n" | Set-Content "..\MQLBetterSyntax.mqh"
}
catch {
    
}
finally {
    Pop-Location
}
