# MQLBetterSyntax

An effort to document MQL4 (meta trader)

# Guide

work in progress

# usage

Add this at the top of your `mqh` file

```cpp
#ifdef __MQLBUILD__
    #property copyright "Copyright 2021, MetaQuotes Software Corp."
    #property link "https://www.mql5.com"
    #property version "1.00"
    #property strict
#else
    #include <MQLBetterSyntax.mqh>
#endif
```

and put the `MQLBetterSyntax.mqh` in your `include` folder.

# FAQ

### Which language are you targeting?

> MQL4

### How can I help?

> donate :dollar: or buy me a coffee :coffee: or help to document :pen: more functions :gear:

> I only document things I am using or facing during the code and see a wiggly line.

# Roadmap

### Functions

<details>

- [ ] AccountBalance
- [ ] AccountCompany
- [ ] AccountCredit
- [ ] AccountCurrency
- [ ] AccountEquity
- [ ] AccountFreeMargin
- [ ] AccountFreeMarginCheck
- [ ] AccountFreeMarginMode
- [ ] AccountInfoDouble
- [ ] AccountInfoInteger
- [ ] AccountInfoString
- [ ] AccountLeverage
- [ ] AccountMargin
- [ ] AccountName
- [ ] AccountNumber
- [ ] AccountProfit
- [ ] AccountServer
- [ ] AccountStopoutLevel
- [ ] AccountStopoutMode
- [ ] acos
- [ ] Alert
- [ ] ArrayBsearch
- [ ] ArrayCompare
- [ ] ArrayCopy
- [ ] ArrayCopyRates
- [ ] ArrayCopySeries
- [ ] ArrayDimension
- [ ] ArrayFill
- [ ] ArrayFree
- [ ] ArrayGetAsSeries
- [ ] ArrayInitialize
- [ ] ArrayIsDynamic
- [ ] ArrayIsSeries
- [ ] ArrayMaximum
- [ ] ArrayMinimum
- [ ] ArrayRange
- [ ] ArrayResize
- [ ] ArraySetAsSeries
- [ ] ArraySize
- [ ] ArraySort
- [ ] asin
- [ ] atan
- [ ] Bars
- [ ] ceil
- [x] CharArrayToString
- [ ] ChartApplyTemplate
- [ ] ChartClose
- [ ] ChartFirst
- [ ] ChartGetDouble
- [ ] ChartGetInteger
- [ ] ChartGetString
- [ ] ChartID
- [ ] ChartIndicatorDelete
- [ ] ChartIndicatorName
- [ ] ChartIndicatorsTotal
- [ ] ChartNavigate
- [ ] ChartNext
- [ ] ChartOpen
- [ ] CharToStr
- [ ] CharToString
- [ ] ChartPeriod
- [ ] ChartPriceOnDropped
- [ ] ChartRedraw
- [ ] ChartSaveTemplate
- [ ] ChartScreenShot
- [ ] ChartSetDouble
- [ ] ChartSetInteger
- [ ] ChartSetString
- [ ] ChartSetSymbolPeriod
- [ ] ChartSymbol
- [ ] ChartTimeOnDropped
- [ ] ChartTimePriceToXY
- [ ] ChartWindowFind
- [ ] ChartWindowOnDropped
- [ ] ChartXOnDropped
- [ ] ChartXYToTimePrice
- [ ] ChartYOnDropped
- [ ] CheckPointer
- [ ] ColorToARGB
- [ ] ColorToString
- [ ] Comment
- [ ] CopyClose
- [ ] CopyHigh
- [ ] CopyLow
- [ ] CopyOpen
- [ ] CopyRates
- [ ] CopyTickVolume
- [ ] CopyTime
- [ ] cos
- [ ] CryptDecode
- [ ] CryptEncode
- [ ] Day
- [ ] DayOfWeek
- [ ] DayOfYear
- [ ] DebugBreak
- [ ] Digits
- [ ] DoubleToStr
- [ ] DoubleToString
- [ ] EnumToString
- [ ] EventChartCustom
- [ ] EventKillTimer
- [ ] EventSetMillisecondTimer
- [ ] EventSetTimer
- [ ] exp
- [ ] ExpertRemove
- [ ] fabs
- [ ] FileClose
- [ ] FileCopy
- [ ] FileDelete
- [ ] FileFindClose
- [ ] FileFindFirst
- [ ] FileFindNext
- [ ] FileFlush
- [ ] FileGetInteger
- [ ] FileIsEnding
- [ ] FileIsExist
- [ ] FileIsLineEnding
- [ ] FileMove
- [ ] FileOpen
- [ ] FileOpenHistory
- [ ] FileReadArray
- [ ] FileReadBool
- [ ] FileReadDatetime
- [ ] FileReadDouble
- [ ] FileReadFloat
- [ ] FileReadInteger
- [ ] FileReadLong
- [ ] FileReadNumber
- [ ] FileReadString
- [ ] FileReadStruct
- [ ] FileSeek
- [ ] FileSize
- [ ] FileTell
- [ ] FileWrite
- [ ] FileWriteArray
- [ ] FileWriteDouble
- [ ] FileWriteFloat
- [ ] FileWriteInteger
- [ ] FileWriteLong
- [ ] FileWriteString
- [ ] FileWriteStruct
- [ ] floor
- [ ] fmax
- [ ] fmin
- [ ] fmod
- [ ] FolderClean
- [ ] FolderCreate
- [ ] FolderDelete
- [ ] GetLastError
- [x] GetPointer
- [ ] GetTickCount
- [ ] GlobalVariableCheck
- [ ] GlobalVariableDel
- [ ] GlobalVariableGet
- [ ] GlobalVariableName
- [ ] GlobalVariablesDeleteAll
- [ ] GlobalVariableSet
- [ ] GlobalVariableSetOnCondition
- [ ] GlobalVariablesFlush
- [ ] GlobalVariablesTotal
- [ ] GlobalVariableTemp
- [ ] GlobalVariableTime
- [ ] HideTestIndicators
- [ ] Hour
- [ ] iAC
- [ ] iAD
- [ ] iADX
- [ ] iAlligator
- [ ] iAO
- [ ] iATR
- [ ] iBands
- [ ] iBandsOnArray
- [ ] iBars
- [ ] iBarShift
- [ ] iBearsPower
- [ ] iBullsPower
- [ ] iBWMFI
- [ ] iCCI
- [ ] iCCIOnArray
- [ ] iClose
- [ ] iCustom
- [ ] iDeMarker
- [ ] iEnvelopes
- [ ] iEnvelopesOnArray
- [ ] iForce
- [ ] iFractals
- [ ] iGator
- [ ] iHigh
- [ ] iHighest
- [ ] iIchimoku
- [ ] iLow
- [ ] iLowest
- [ ] iMA
- [ ] iMACD
- [ ] iMAOnArray
- [ ] iMFI
- [ ] iMomentum
- [ ] iMomentumOnArray
- [ ] IndicatorBuffers
- [ ] IndicatorCounted
- [ ] IndicatorDigits
- [ ] IndicatorSetDouble
- [ ] IndicatorSetInteger
- [ ] IndicatorSetString
- [ ] IndicatorShortName
- [ ] IntegerToString
- [ ] iOBV
- [ ] iOpen
- [ ] iOsMA
- [ ] iRSI
- [ ] iRSIOnArray
- [ ] iRVI
- [ ] iSAR
- [ ] IsConnected
- [ ] IsDemo
- [ ] IsDllsAllowed
- [ ] IsExpertEnabled
- [ ] IsLibrariesAllowed
- [ ] IsOptimization
- [ ] IsStopped
- [ ] iStdDev
- [ ] iStdDevOnArray
- [ ] IsTesting
- [ ] iStochastic
- [ ] IsTradeAllowed
- [ ] IsTradeContextBusy
- [ ] IsVisualMode
- [ ] iTime
- [ ] iVolume
- [ ] iWPR
- [ ] log
- [ ] log10
- [ ] MarketInfo
- [ ] MathAbs
- [ ] MathArccos
- [ ] MathArcsin
- [ ] MathArctan
- [ ] MathCeil
- [ ] MathCos
- [ ] MathExp
- [ ] MathFloor
- [ ] MathIsValidNumber
- [ ] MathLog
- [ ] MathLog10
- [ ] MathMax
- [ ] MathMin
- [ ] MathMod
- [ ] MathPow
- [ ] MathRand
- [ ] MathRound
- [ ] MathSin
- [ ] MathSqrt
- [ ] MathSrand
- [ ] MathTan
- [ ] MessageBox
- [ ] Minute
- [ ] Month
- [ ] MQLInfoInteger
- [ ] MQLInfoString
- [ ] MQLSetInteger
- [ ] NormalizeDouble
- [ ] ObjectCreate
- [ ] ObjectDelete
- [ ] ObjectDescription
- [ ] ObjectFind
- [ ] ObjectGet
- [ ] ObjectGetDouble
- [ ] ObjectGetFiboDescription
- [ ] ObjectGetInteger
- [ ] ObjectGetShiftByValue
- [ ] ObjectGetString
- [ ] ObjectGetTimeByValue
- [ ] ObjectGetValueByShift
- [ ] ObjectGetValueByTime
- [ ] ObjectMove
- [ ] ObjectName
- [ ] ObjectsDeleteAll
- [ ] ObjectSet
- [ ] ObjectSetDouble
- [ ] ObjectSetFiboDescription
- [ ] ObjectSetInteger
- [ ] ObjectSetString
- [ ] ObjectSetText
- [ ] ObjectsTotal
- [ ] ObjectType
- [ ] OrderClose
- [ ] OrderCloseBy
- [ ] OrderClosePrice
- [ ] OrderCloseTime
- [ ] OrderComment
- [ ] OrderCommission
- [ ] OrderDelete
- [ ] OrderExpiration
- [ ] OrderLots
- [ ] OrderMagicNumber
- [ ] OrderModify
- [ ] OrderOpenPrice
- [ ] OrderOpenTime
- [ ] OrderPrint
- [ ] OrderProfit
- [ ] OrderSelect
- [x] OrderSend
- [ ] OrdersHistoryTotal
- [ ] OrderStopLoss
- [ ] OrdersTotal
- [ ] OrderSwap
- [ ] OrderSymbol
- [ ] OrderTakeProfit
- [ ] OrderTicket
- [ ] OrderType
- [ ] Period
- [ ] Period
- [ ] PeriodSeconds
- [ ] PlaySound
- [ ] Point
- [ ] pow
- [x] Print
- [ ] PrintFormat
- [ ] rand
- [ ] RefreshRates
- [ ] ResetLastError
- [ ] ResourceCreate
- [ ] ResourceFree
- [ ] ResourceReadImage
- [ ] ResourceSave
- [ ] round
- [ ] Seconds
- [ ] SendFTP
- [ ] SendMail
- [ ] SendNotification
- [ ] SeriesInfoInteger
- [ ] SetIndexArrow
- [ ] SetIndexBuffer
- [ ] SetIndexDrawBegin
- [ ] SetIndexEmptyValue
- [ ] SetIndexLabel
- [ ] SetIndexShift
- [ ] SetIndexStyle
- [ ] SetLevelStyle
- [ ] SetLevelValue
- [ ] ShortArrayToString
- [ ] ShortToString
- [ ] SignalBaseGetDouble
- [ ] SignalBaseGetInteger
- [ ] SignalBaseGetString
- [ ] SignalBaseSelect
- [ ] SignalBaseTotal
- [ ] SignalInfoGetDouble
- [ ] SignalInfoGetInteger
- [ ] SignalInfoGetString
- [ ] SignalInfoSetDouble
- [ ] SignalInfoSetInteger
- [ ] SignalSubscribe
- [ ] SignalUnsubscribe
- [ ] sin
- [ ] Sleep
- [ ] sqrt
- [ ] srand
- [ ] StringAdd
- [ ] StringBufferLen
- [ ] StringCompare
- [ ] StringConcatenate
- [ ] StringFill
- [ ] StringFind
- [ ] StringFormat
- [ ] StringGetChar
- [ ] StringGetCharacter
- [ ] StringInit
- [ ] StringLen
- [ ] StringReplace
- [ ] StringSetChar
- [ ] StringSetCharacter
- [ ] StringSplit
- [ ] StringSubstr
- [x] StringToCharArray
- [ ] StringToColor
- [ ] StringToDouble
- [ ] StringToInteger
- [ ] StringToLower
- [ ] StringToShortArray
- [ ] StringToTime
- [ ] StringToUpper
- [ ] StringTrimLeft
- [ ] StringTrimRight
- [ ] StrToDouble
- [ ] StrToInteger
- [ ] StrToTime
- [ ] StructToTime
- [x] Symbol
- [x] SymbolInfoDouble
- [ ] SymbolInfoInteger
- [ ] SymbolInfoSessionQuote
- [ ] SymbolInfoSessionTrade
- [ ] SymbolInfoString
- [ ] SymbolInfoTick
- [ ] SymbolName
- [ ] SymbolSelect
- [ ] SymbolsTotal
- [ ] tan
- [ ] TerminalClose
- [ ] TerminalCompany
- [ ] TerminalInfoDouble
- [ ] TerminalInfoInteger
- [ ] TerminalInfoString
- [ ] TerminalName
- [ ] TerminalPath
- [ ] TesterStatistics
- [ ] TextGetSize
- [ ] TextOut
- [ ] TextSetFont
- [ ] TimeCurrent
- [ ] TimeDay
- [ ] TimeDaylightSavings
- [ ] TimeDayOfWeek
- [ ] TimeDayOfYear
- [ ] TimeGMT
- [ ] TimeGMTOffset
- [ ] TimeHour
- [ ] TimeLocal
- [ ] TimeMinute
- [ ] TimeMonth
- [ ] TimeSeconds
- [ ] TimeToStr
- [ ] TimeToString
- [ ] TimeToStruct
- [ ] TimeYear
- [ ] UninitializeReason
- [ ] WebRequest
- [ ] WindowBarsPerChart
- [ ] WindowExpertName
- [ ] WindowFind
- [ ] WindowFirstVisibleBar
- [ ] WindowHandle
- [ ] WindowIsVisible
- [ ] WindowOnDropped
- [ ] WindowPriceMax
- [ ] WindowPriceMin
- [ ] WindowPriceOnDropped
- [ ] WindowRedraw
- [ ] WindowScreenShot
- [ ] WindowsTotal
- [ ] WindowTimeOnDropped
- [ ] WindowXOnDropped
- [ ] WindowYOnDropped
- [ ] Year
- [ ] ZeroMemory

</details>

---

### Constants

<details>

- [ ] \_\_DATE\_\_
- [ ] \_\_DATETIME\_\_
- [ ] \_\_FILE\_\_
- [ ] \_\_FUNCSIG\_\_
- [ ] \_\_FUNCTION\_\_
- [ ] \_\_LINE\_\_
- [x] \_\_MQLBUILD**, \_\_MQL4BUILD**
- [ ] \_\_PATH\_\_
- [ ] ACCOUNT_BALANCE
- [ ] ACCOUNT_COMPANY
- [ ] ACCOUNT_CREDIT
- [ ] ACCOUNT_CURRENCY
- [ ] ACCOUNT_EQUITY
- [ ] ACCOUNT_MARGIN_FREE
- [ ] ACCOUNT_LEVERAGE
- [ ] ACCOUNT_LIMIT_ORDERS
- [ ] ACCOUNT_LOGIN
- [ ] ACCOUNT_MARGIN
- [ ] ACCOUNT_MARGIN_LEVEL
- [ ] ACCOUNT_MARGIN_SO_CALL
- [ ] ACCOUNT_MARGIN_SO_MODE
- [ ] ACCOUNT_MARGIN_SO_SO
- [ ] ACCOUNT_NAME
- [ ] ACCOUNT_PROFIT
- [ ] ACCOUNT_SERVER
- [ ] ACCOUNT_STOPOUT_MODE_MONEY
- [ ] ACCOUNT_STOPOUT_MODE_PERCENT
- [ ] ACCOUNT_TRADE_ALLOWED
- [ ] ACCOUNT_TRADE_EXPERT
- [ ] ACCOUNT_TRADE_MODE
- [ ] ACCOUNT_TRADE_MODE_CONTEST
- [ ] ACCOUNT_TRADE_MODE_DEMO
- [ ] ACCOUNT_TRADE_MODE_REAL
- [ ] ALIGN_CENTER
- [ ] ALIGN_LEFT
- [ ] ALIGN_RIGHT
- [ ] ANCHOR_BOTTOM
- [ ] ANCHOR_CENTER
- [ ] ANCHOR_LEFT
- [ ] ANCHOR_LEFT_LOWER
- [ ] ANCHOR_LEFT_UPPER
- [ ] ANCHOR_LOWER
- [ ] ANCHOR_RIGHT
- [ ] ANCHOR_RIGHT_LOWER
- [ ] ANCHOR_RIGHT_UPPER
- [ ] ANCHOR_TOP
- [ ] ANCHOR_UPPER
- [ ] BORDER_FLAT
- [ ] BORDER_RAISED
- [ ] BORDER_SUNKEN
- [ ] CHAR_MAX
- [ ] CHAR_MIN
- [ ] CHART_AUTOSCROLL
- [ ] CHART_BARS
- [ ] CHART_BEGIN
- [ ] CHART_BRING_TO_TOP
- [ ] CHART_CANDLES
- [ ] CHART_COLOR_ASK
- [ ] CHART_COLOR_BACKGROUND
- [ ] CHART_COLOR_BID
- [ ] CHART_COLOR_CANDLE_BEAR
- [ ] CHART_COLOR_CANDLE_BULL
- [ ] CHART_COLOR_CHART_DOWN
- [ ] CHART_COLOR_CHART_LINE
- [ ] CHART_COLOR_CHART_UP
- [ ] CHART_COLOR_FOREGROUND
- [ ] CHART_COLOR_GRID
- [ ] CHART_COLOR_LAST
- [ ] CHART_COLOR_STOP_LEVEL
- [ ] CHART_COLOR_VOLUME
- [ ] CHART_COMMENT
- [ ] CHART_CURRENT_POS
- [ ] CHART_DRAG_TRADE_LEVELS
- [ ] CHART_END
- [ ] CHART_EVENT_MOUSE_MOVE
- [ ] CHART_EVENT_OBJECT_CREATE
- [ ] CHART_EVENT_OBJECT_DELETE
- [ ] CHART_FIRST_VISIBLE_BAR
- [ ] CHART_FIXED_MAX
- [ ] CHART_FIXED_MIN
- [ ] CHART_FIXED_POSITION
- [ ] CHART_FOREGROUND
- [ ] CHART_HEIGHT_IN_PIXELS
- [ ] CHART_IS_OFFLINE
- [ ] CHART_LINE
- [ ] CHART_MODE
- [ ] CHART_MOUSE_SCROLL
- [ ] CHART_POINTS_PER_BAR
- [ ] CHART_PRICE_MAX
- [ ] CHART_PRICE_MIN
- [ ] CHART_SCALE
- [ ] CHART_SCALE_PT_PER_BAR
- [ ] CHART_SCALEFIX
- [ ] CHART_SCALEFIX_11
- [ ] CHART_SHIFT
- [ ] CHART_SHIFT_SIZE
- [ ] CHART_SHOW_ASK_LINE
- [ ] CHART_SHOW_BID_LINE
- [ ] CHART_SHOW_DATE_SCALE
- [ ] CHART_SHOW_GRID
- [ ] CHART_SHOW_LAST_LINE
- [ ] CHART_SHOW_OBJECT_DESCR
- [ ] CHART_SHOW_OHLC
- [ ] CHART_SHOW_PERIOD_SEP
- [ ] CHART_SHOW_PRICE_SCALE
- [ ] CHART_SHOW_TRADE_LEVELS
- [ ] CHART_SHOW_VOLUMES
- [ ] CHART_VISIBLE_BARS
- [ ] CHART_VOLUME_HIDE
- [ ] CHART_VOLUME_TICK
- [ ] CHART_WIDTH_IN_BARS
- [ ] CHART_WIDTH_IN_PIXELS
- [ ] CHART_WINDOW_HANDLE
- [ ] CHART_WINDOW_IS_VISIBLE
- [ ] CHART_WINDOW_YDISTANCECHART_WINDOWS_TOTAL
- [ ] CHARTEVENT_CHART_CHANGE
- [ ] CHARTEVENT_CLICK
- [ ] CHARTEVENT_CUSTOM
- [ ] CHARTEVENT_CUSTOM_LAST
- [ ] CHARTEVENT_KEYDOWN
- [ ] CHARTEVENT_MOUSE_MOVE
- [ ] CHARTEVENT_OBJECT_CHANGE
- [ ] CHARTEVENT_OBJECT_CLICK
- [ ] CHARTEVENT_OBJECT_CREATE
- [ ] CHARTEVENT_OBJECT_DELETE
- [ ] CHARTEVENT_OBJECT_DRAG
- [ ] CHARTEVENT_OBJECT_ENDEDIT
- [ ] CHARTS_MAX
- [x] CLR_NONE, clrNONE
- [x] clrAliceBlue
- [x] clrAntiqueWhite
- [x] clrAqua
- [x] clrAquamarine
- [x] clrBeige
- [x] clrBisque
- [x] clrBlack
- [x] clrBlanchedAlmond
- [x] clrBlue
- [x] clrBlueViolet
- [x] clrBrown
- [x] clrBurlyWood
- [x] clrCadetBlue
- [x] clrChartreuse
- [x] clrChocolate
- [x] clrCoral
- [x] clrCornflowerBlue
- [x] clrCornsilk
- [x] clrCrimson
- [x] clrDarkBlue
- [x] clrDarkGoldenrod
- [x] clrDarkGray
- [x] clrDarkGreen
- [x] clrDarkKhaki
- [x] clrDarkOliveGreen
- [x] clrDarkOrange
- [x] clrDarkOrchid
- [x] clrDarkSalmon
- [x] clrDarkSeaGreen
- [x] clrDarkSlateBlue
- [x] clrDarkSlateGray
- [x] clrDarkTurquoise
- [x] clrDarkViolet
- [x] clrDeepPink
- [x] clrDeepSkyBlue
- [x] clrDimGray
- [x] clrDodgerBlue
- [x] clrFireBrick
- [x] clrForestGreen
- [x] clrGainsboro
- [x] clrGold
- [x] clrGoldenrod
- [x] clrGray
- [x] clrGreen
- [x] clrGreenYellow
- [x] clrHoneydew
- [x] clrHotPink
- [x] clrIndianRed
- [x] clrIndigo
- [x] clrIvory
- [x] clrKhaki
- [x] clrLavender
- [x] clrLavenderBlush
- [x] clrLawnGreen
- [x] clrLemonChiffon
- [x] clrLightBlue
- [x] clrLightCoral
- [x] clrLightCyan
- [x] clrLightGoldenrod
- [x] clrLightGray
- [x] clrLightGreen
- [x] clrLightPink
- [x] clrLightSalmon
- [x] clrLightSeaGreen
- [x] clrLightSkyBlue
- [x] clrLightSlateGray
- [x] clrLightSteelBlue
- [x] clrLightYellow
- [x] clrLime
- [x] clrLimeGreen
- [x] clrLinen
- [x] clrMagenta
- [x] clrMaroon
- [x] clrMediumAquamarine
- [x] clrMediumBlue
- [x] clrMediumOrchid
- [x] clrMediumPurple
- [x] clrMediumSeaGreen
- [x] clrMediumSlateBlue
- [x] clrMediumSpringGreen
- [x] clrMediumTurquoise
- [x] clrMediumVioletRed
- [x] clrMidnightBlue
- [x] clrMintCream
- [x] clrMistyRose
- [x] clrMoccasin
- [x] clrNavajoWhite
- [x] clrNavy
- [x] clrOldLace
- [x] clrOlive
- [x] clrOliveDrab
- [x] clrOrange
- [x] clrOrangeRed
- [x] clrOrchid
- [x] clrPaleGoldenrod
- [x] clrPaleGreen
- [x] clrPaleTurquoise
- [x] clrPaleVioletRed
- [x] clrPapayaWhip
- [x] clrPeachPuff
- [x] clrPeru
- [x] clrPink
- [x] clrPlum
- [x] clrPowderBlue
- [x] clrPurple
- [x] clrRed
- [x] clrRosyBrown
- [x] clrRoyalBlue
- [x] clrSaddleBrown
- [x] clrSalmon
- [x] clrSandyBrown
- [x] clrSeaGreen
- [x] clrSeashell
- [x] clrSienna
- [x] clrSilver
- [x] clrSkyBlue
- [x] clrSlateBlue
- [x] clrSlateGray
- [x] clrSnow
- [x] clrSpringGreen
- [x] clrSteelBlue
- [x] clrTan
- [x] clrTeal
- [x] clrThistle
- [x] clrTomato
- [x] clrTurquoise
- [x] clrViolet
- [x] clrWheat
- [x] clrWhite
- [x] clrWhiteSmoke
- [x] clrYellow
- [x] clrYellowGreen
- [ ] CORNER_LEFT_LOWER
- [ ] CORNER_LEFT_UPPER
- [ ] CORNER_RIGHT_LOWER
- [ ] CORNER_RIGHT_UPPER
- [x] CP_ACP
- [x] CP_MACCP
- [x] CP_OEMCP
- [x] CP_SYMBOL
- [x] CP_THREAD_ACP
- [x] CP_UTF7
- [x] CP_UTF8
- [ ] CRYPT_AES128
- [ ] CRYPT_AES256
- [ ] CRYPT_ARCH_ZIP
- [ ] CRYPT_BASE64
- [ ] CRYPT_DES
- [ ] CRYPT_HASH_MD5
- [ ] CRYPT_HASH_SHA1
- [ ] CRYPT_HASH_SHA256
- [ ] DBL_DIG
- [ ] DBL_EPSILON
- [ ] DBL_MANT_DIG
- [ ] DBL_MAX
- [ ] DBL_MAX_10_EXP
- [ ] DBL_MAX_EXP
- [ ] DBL_MIN
- [ ] DBL_MIN_10_EXP
- [ ] DBL_MIN_EXP
- [ ] DRAW_ARROW
- [ ] DRAW_HISTOGRAM
- [ ] DRAW_LINE
- [ ] DRAW_NONE
- [ ] DRAW_SECTION
- [ ] DRAW_ZIGZAG
- [ ] EMPTY
- [ ] EMPTY_VALUE
- [ ] ERR_ACCOUNT_DISABLED
- [ ] ERR_ARRAY_AS_PARAMETER_EXPECTED
- [ ] ERR_ARRAY_INDEX_OUT_OF_RANGE
- [ ] ERR_ARRAY_INVALID
- [ ] ERR_BROKER_BUSY
- [ ] ERR_CANNOT_CALL_FUNCTION
- [ ] ERR_CANNOT_LOAD_LIBRARY
- [ ] ERR_CANNOT_OPEN_FILE
- [ ] ERR_CHART_NOREPLY
- [ ] ERR_CHART_NOT_FOUND
- [ ] ERR_CHART_PROP_INVALID
- [ ] ERR_CHARTINDICATOR_NOT_FOUND
- [ ] ERR_CHARTWINDOW_NOT_FOUND
- [ ] ERR_COMMON_ERROR
- [ ] ERR_CUSTOM_INDICATOR_ERROR
- [ ] ERR_DLL_CALLS_NOT_ALLOWED
- [ ] ERR_DLLFUNC_CRITICALERROR
- [ ] ERR_DOUBLE_PARAMETER_EXPECTED
- [ ] ERR_END_OF_FILE
- [ ] ERR_EXTERNAL_CALLS_NOT_ALLOWED
- [ ] ERR_FILE_ARRAYRESIZE_ERROR
- [ ] ERR_FILE_BIN_STRINGSIZE
- [ ] ERR_FILE_BUFFER_ALLOCATION_ERROR
- [ ] ERR_FILE_CANNOT_CLEAN_DIRECTORY
- [ ] ERR_FILE_CANNOT_DELETE
- [ ] ERR_FILE_CANNOT_DELETE_DIRECTORY
- [ ] ERR_FILE_CANNOT_OPEN
- [ ] ERR_FILE_CANNOT_REWRITE
- [ ] ERR_FILE_DIRECTORY_NOT_EXIST
- [ ] ERR_FILE_INCOMPATIBLE
- [ ] ERR_FILE_INVALID_HANDLE
- [ ] ERR_FILE_IS_DIRECTORY
- [ ] ERR_FILE_NOT_BIN
- [ ] ERR_FILE_NOT_CSV
- [ ] ERR_FILE_NOT_DIRECTORY
- [ ] ERR_FILE_NOT_EXIST
- [ ] ERR_FILE_NOT_TOREAD
- [ ] ERR_FILE_NOT_TOWRITE
- [ ] ERR_FILE_NOT_TXT
- [ ] ERR_FILE_NOT_TXTORCSV
- [ ] ERR_FILE_READ_ERROR
- [ ] ERR_FILE_STRINGRESIZE_ERROR
- [ ] ERR_FILE_STRUCT_WITH_OBJECTS
- [ ] ERR_FILE_TOO_LONG_FILENAME
- [ ] ERR_FILE_TOO_MANY_OPENED
- [ ] ERR_FILE_WRITE_ERROR
- [ ] ERR_FILE_WRONG_DIRECTORYNAME
- [ ] ERR_FILE_WRONG_FILENAME
- [ ] ERR_FILE_WRONG_HANDLE
- [ ] ERR_FORMAT_TOO_MANY_FORMATTERS
- [ ] ERR_FORMAT_TOO_MANY_PARAMETERS
- [ ] ERR_FUNC_NOT_ALLOWED_IN_TESTING
- [ ] ERR_FUNCTION_NOT_CONFIRMED
- [ ] ERR_GLOBAL_VARIABLE_NOT_FOUND
- [ ] ERR_GLOBAL_VARIABLES_PROCESSING
- [ ] ERR_HISTORY_WILL_UPDATED
- [ ] ERR_INCOMPATIBLE_ARRAYS
- [ ] ERR_INCOMPATIBLE_FILEACCESS
- [ ] ERR_INCORRECT_SERIESARRAY_USING
- [ ] ERR_INDICATOR_CANNOT_INIT
- [ ] ERR_INDICATOR_CANNOT_LOAD
- [ ] ERR_INTEGER_PARAMETER_EXPECTED
- [ ] ERR_INTERNAL_ERROR
- [ ] ERR_INVALID_ACCOUNT
- [ ] ERR_INVALID_FUNCTION_PARAMSCNT
- [ ] ERR_INVALID_FUNCTION_PARAMVALUE
- [ ] ERR_INVALID_POINTER
- [ ] ERR_INVALID_PRICE
- [ ] ERR_INVALID_PRICE_PARAM
- [ ] ERR_INVALID_STOPS
- [ ] ERR_INVALID_TICKET
- [ ] ERR_INVALID_TRADE_PARAMETERS
- [ ] ERR_INVALID_TRADE_VOLUME
- [ ] ERR_LONG_POSITIONS_ONLY_ALLOWED
- [ ] ERR_LONGS_NOT_ALLOWED
- [ ] ERR_MALFUNCTIONAL_TRADE
- [ ] ERR_MARKET_CLOSED
- [ ] ERR_NO_CONNECTION
- [ ] ERR_NO_ERROR
- [ ] ERR_NO_HISTORY_DATA
- [ ] ERR_NO_MEMORY_FOR_ARRAYSTRING
- [ ] ERR_NO_MEMORY_FOR_CALL_STACK
- [ ] ERR_NO_MEMORY_FOR_HISTORY
- [ ] ERR_NO_MEMORY_FOR_PARAM_STRING
- [ ] ERR_NO_MEMORY_FOR_RETURNED_STR
- [ ] ERR_NO_MEMORY_FOR_TEMP_STRING
- [ ] ERR_NO_MQLERROR
- [ ] ERR_NO_OBJECT_NAME
- [ ] ERR_NO_ORDER_SELECTED
- [ ] ERR_NO_RESULT
- [ ] ERR_NO_SPECIFIED_SUBWINDOW
- [ ] ERR_NOT_ENOUGH_MONEY
- [ ] ERR_NOT_ENOUGH_RIGHTS
- [ ] ERR_NOT_ENOUGH_STACK_FOR_PARAM
- [ ] ERR_NOT_INITIALIZED_ARRAY
- [ ] ERR_NOT_INITIALIZED_ARRAYSTRING
- [ ] ERR_NOT_INITIALIZED_STRING
- [ ] ERR_NOTIFICATION_ERROR
- [ ] ERR_NOTIFICATION_PARAMETER
- [ ] ERR_NOTIFICATION_SETTINGS
- [ ] ERR_NOTIFICATION_TOO_FREQUENT
- [ ] ERR_OBJECT_ALREADY_EXISTS
- [ ] ERR_OBJECT_COORDINATES_ERROR
- [ ] ERR_OBJECT_DOES_NOT_EXIST
- [ ] ERR_OFF_QUOTES
- [ ] ERR_OLD_VERSION
- [ ] ERR_ORDER_LOCKED
- [ ] ERR_OUT_OF_MEMORY
- [ ] ERR_PRICE_CHANGED
- [ ] ERR_RECURSIVE_STACK_OVERFLOW
- [ ] ERR_REMAINDER_FROM_ZERO_DIVIDE
- [ ] ERR_REQUOTE
- [ ] ERR_RESOURCE_DUPLICATED
- [ ] ERR_RESOURCE_NOT_FOUND
- [ ] ERR_RESOURCE_NOT_SUPPORTED
- [ ] ERR_SEND_MAIL_ERROR
- [ ] ERR_SERVER_BUSY
- [ ] ERR_SHORTS_NOT_ALLOWED
- [ ] ERR_SOME_ARRAY_ERROR
- [ ] ERR_SOME_FILE_ERROR
- [ ] ERR_SOME_OBJECT_ERROR
- [ ] ERR_STRING_FUNCTION_INTERNAL
- [ ] ERR_STRING_PARAMETER_EXPECTED
- [ ] ERR_SYMBOL_SELECT
- [ ] ERR_SYSTEM_BUSY
- [ ] ERR_TOO_FREQUENT_REQUESTS
- [ ] ERR_TOO_LONG_STRING
- [ ] ERR_TOO_MANY_OPENED_FILES
- [ ] ERR_TOO_MANY_REQUESTS
- [ ] ERR_TRADE_CONTEXT_BUSY
- [ ] ERR_TRADE_DISABLED
- [ ] ERR_TRADE_ERROR
- [ ] ERR_TRADE_EXPERT_DISABLED_BY_SERVER
- [ ] ERR_TRADE_EXPIRATION_DENIED
- [ ] ERR_TRADE_HEDGE_PROHIBITED
- [ ] ERR_TRADE_MODIFY_DENIED
- [ ] ERR_TRADE_NOT_ALLOWED
- [ ] ERR_TRADE_PROHIBITED_BY_FIFO
- [ ] ERR_TRADE_TIMEOUT
- [ ] ERR_TRADE_TOO_MANY_ORDERS
- [ ] ERR_UNKNOWN_COMMAND
- [ ] ERR_UNKNOWN_OBJECT_PROPERTY
- [ ] ERR_UNKNOWN_OBJECT_TYPE
- [ ] ERR_UNKNOWN_SYMBOL
- [ ] ERR_USER_ERROR_FIRST
- [ ] ERR_WEBREQUEST_CONNECT_FAILED
- [ ] ERR_WEBREQUEST_INVALID_ADDRESS
- [ ] ERR_WEBREQUEST_REQUEST_FAILED
- [ ] ERR_WEBREQUEST_TIMEOUT
- [ ] ERR_WRONG_FILE_NAME
- [ ] ERR_WRONG_FUNCTION_POINTER
- [ ] ERR_WRONG_JUMP
- [ ] ERR_ZERO_DIVIDE
- [ ] FILE_ACCESS_DATE
- [ ] FILE_ANSI
- [ ] FILE_BIN
- [ ] FILE_COMMON
- [ ] FILE_CREATE_DATE
- [ ] FILE_CSV
- [ ] FILE_END
- [ ] FILE_EXISTS
- [ ] FILE_IS_ANSI
- [ ] FILE_IS_BINARY
- [ ] FILE_IS_COMMON
- [ ] FILE_IS_CSV
- [ ] FILE_IS_READABLE
- [ ] FILE_IS_TEXT
- [ ] FILE_IS_WRITABLE
- [ ] FILE_LINE_END
- [ ] FILE_MODIFY_DATE
- [ ] FILE_POSITION
- [ ] FILE_READ
- [ ] FILE_REWRITE
- [ ] FILE_SHARE_READ
- [ ] FILE_SHARE_WRITE
- [ ] FILE_SIZE
- [ ] FILE_TXT
- [ ] FILE_UNICODE
- [ ] FILE_WRITE
- [ ] FLT_DIG
- [ ] FLT_EPSILONFLT_MANT_DIG
- [ ] FLT_MAX
- [ ] FLT_MAX_10_EXP
- [ ] FLT_MAX_EXP
- [ ] FLT_MIN
- [ ] FLT_MIN_10_EXP
- [ ] FLT_MIN_EXP
- [ ] FRIDAY
- [ ] GANN_DOWN_TREND
- [ ] GANN_UP_TREND
- [ ] IDABORT
- [ ] IDCANCEL
- [ ] IDCONTINUE
- [ ] IDIGNORE
- [ ] IDNO
- [ ] IDOK
- [ ] IDRETRY
- [ ] IDTRYAGAIN
- [ ] IDYES
- [ ] INDICATOR_DIGITS
- [ ] INDICATOR_HEIGHT
- [ ] INDICATOR_LEVELCOLOR
- [ ] INDICATOR_LEVELS
- [ ] INDICATOR_LEVELSTYLE
- [ ] INDICATOR_LEVELTEXT
- [ ] INDICATOR_LEVELVALUE
- [ ] INDICATOR_LEVELWIDTH
- [ ] INDICATOR_MAXIMUM
- [ ] INDICATOR_MINIMUM
- [ ] INDICATOR_SHORTNAME
- [ ] INT_MAX
- [ ] INT_MIN
- [ ] INVALID_HANDLE
- [ ] IS_DEBUG_MODE
- [ ] IS_PROFILE_MODE
- [ ] LONG_MAX
- [ ] LONG_MIN
- [ ] M_1_PI
- [ ] M_2_PI
- [ ] M_2_SQRTPI
- [ ] M_E
- [ ] M_LN10
- [ ] M_LN2
- [ ] M_LOG10E
- [ ] M_LOG2E
- [ ] M_PI
- [ ] M_PI_2
- [ ] M_PI_4
- [ ] M_SQRT1_2
- [ ] M_SQRT2
- [ ] MB_ABORTRETRYIGNORE
- [ ] MB_CANCELTRYCONTINUE
- [ ] MB_DEFBUTTON1
- [ ] MB_DEFBUTTON2
- [ ] MB_DEFBUTTON3
- [ ] MB_DEFBUTTON4
- [ ] MB_ICONEXCLAMATION,
- [ ] MB_ICONWARNING
- [ ] MB_ICONINFORMATION,
- [ ] MB_ICONASTERISK
- [ ] MB_ICONQUESTION
- [ ] MB_ICONSTOP,
- [ ] MB_ICONERROR,
- [ ] MB_ICONHAND
- [ ] MB_OK
- [ ] MB_OKCANCEL
- [ ] MB_RETRYCANCEL
- [ ] MB_YESNO
- [ ] MB_YESNOCANCEL
- [x] MODE_ASK
- [x] MODE_BID
- [ ] MODE_CHIKOUSPAN
- [ ] MODE_CLOSE
- [ ] MODE_DIGITS
- [ ] MODE_EMA
- [ ] MODE_EXPIRATION
- [ ] MODE_FREEZELEVEL
- [ ] MODE_GATORJAW
- [ ] MODE_GATORLIPS
- [ ] MODE_GATORTEETH
- [ ] MODE_HIGH
- [ ] MODE_HISTORY
- [ ] MODE_KIJUNSEN
- [x] MODE_LOTSIZE
- [x] MODE_LOTSTEP
- [ ] MODE_LOW
- [ ] MODE_LOWER
- [ ] MODE_LWMA
- [ ] MODE_MAIN
- [x] MODE_MARGINCALCMODE
- [x] MODE_MARGINHEDGED
- [x] MODE_MARGININIT
- [x] MODE_MARGINMAINTENANCE
- [x] MODE_MARGINREQUIRED
- [x] MODE_MAXLOT
- [ ] MODE_MINLOT
- [ ] MODE_MINUSDI
- [ ] MODE_OPEN
- [ ] MODE_PLUSDI
- [x] MODE_POINT
- [x] MODE_PROFITCALCMODE
- [ ] MODE_SENKOUSPANA
- [ ] MODE_SENKOUSPANB
- [ ] MODE_SIGNAL
- [ ] MODE_SMA
- [ ] MODE_SMMA
- [x] MODE_SPREAD
- [ ] MODE_STARTING
- [x] MODE_STOPLEVEL
- [x] MODE_SWAPLONG
- [x] MODE_SWAPSHORT
- [ ] MODE_SWAPTYPE
- [ ] MODE_TENKANSEN
- [x] MODE_TICKSIZE
- [x] MODE_TICKVALUE
- [ ] MODE_TIME
- [ ] MODE_TRADEALLOWED
- [ ] MODE_TRADES
- [ ] MODE_UPPER
- [ ] MODE_VOLUME
- [ ] MONDAY
- [ ] MQL_DEBUG
- [ ] MQL_DLLS_ALLOWED
- [ ] QL_OPTIMIZATION
- [ ] MQL_PROFILER
- [ ] MQL_PROGRAM_NAME
- [ ] MQL_PROGRAM_PATH
- [ ] MQL_PROGRAM_TYPE
- [ ] MQL_SIGNALS_ALLOWED
- [ ] MQL_TESTER
- [ ] MQL_TRADE_ALLOWED
- [ ] MQL_VISUAL_MODE
- [ ] NULL
- [ ] OBJ_ALL_PERIODS
- [ ] OBJ_ARROW
- [ ] OBJ_ARROW_BUY
- [ ] OBJ_ARROW_CHECK
- [ ] OBJ_ARROW_DOWN
- [ ] OBJ_ARROW_LEFT_PRICE
- [ ] OBJ_ARROW_RIGHT_PRICE
- [ ] OBJ_ARROW_SELL
- [ ] OBJ_ARROW_STOP
- [ ] OBJ_ARROW_THUMB_DOWN
- [ ] OBJ_ARROW_THUMB_UP
- [ ] OBJ_ARROW_UP
- [ ] OBJ_BITMAP
- [ ] OBJ_BITMAP_LABEL
- [ ] OBJ_BUTTON
- [ ] OBJ_CHANNEL
- [ ] OBJ_CYCLES
- [ ] OBJ_EDIT
- [ ] OBJ_ELLIPSE
- [ ] OBJ_EVENT
- [ ] OBJ_EXPANSION
- [ ] OBJ_FIBO
- [ ] OBJ_FIBOARC
- [ ] OBJ_FIBOCHANNEL
- [ ] OBJ_FIBOFAN
- [ ] OBJ_FIBOTIMES
- [ ] OBJ_GANNFAN
- [ ] OBJ_GANNGRID
- [ ] OBJ_GANNLINE
- [ ] OBJ_HLINE
- [ ] OBJ_LABEL
- [ ] OBJ_NO_PERIODS, EMPTY
- [ ] OBJ_PERIOD_D1
- [ ] OBJ_PERIOD_H1
- [ ] OBJ_PERIOD_H4
- [ ] OBJ_PERIOD_M1
- [ ] OBJ_PERIOD_M15
- [ ] OBJ_PERIOD_M30
- [ ] OBJ_PERIOD_M5
- [ ] OBJ_PERIOD_MN1
- [ ] OBJ_PERIOD_W1
- [ ] OBJ_PITCHFORK
- [ ] OBJ_RECTANGLE
- [ ] OBJ_RECTANGLE_LABEL
- [ ] OBJ_REGRESSION
- [ ] OBJ_STDDEVCHANNEL
- [ ] OBJ_TEXT
- [ ] OBJ_TREND
- [ ] OBJ_TRENDBYANGLE
- [ ] OBJ_TRIANGLE
- [ ] OBJ_VLINE
- [ ] OBJPROP_ALIGN
- [ ] OBJPROP_ANCHOR
- [ ] OBJPROP_ANGLE
- [ ] OBJPROP_ARROWCODE
- [ ] OBJPROP_BACK
- [ ] OBJPROP_BGCOLOR
- [ ] OBJPROP_BMPFILE
- [ ] OBJPROP_BORDER_COLOR
- [ ] OBJPROP_BORDER_TYPE
- [ ] OBJPROP_COLOR
- [ ] OBJPROP_CORNER
- [ ] OBJPROP_CREATETIME
- [ ] OBJPROP_DEVIATION
- [ ] OBJPROP_DRAWLINES
- [ ] OBJPROP_ELLIPSE
- [ ] OBJPROP_FIBOLEVELS
- [ ] OBJPROP_FIRSTLEVEL+n
- [ ] OBJPROP_FONT
- [ ] OBJPROP_FONTSIZE
- [ ] OBJPROP_HIDDEN
- [ ] OBJPROP_LEVELCOLOR
- [ ] OBJPROP_LEVELS
- [ ] OBJPROP_LEVELSTYLE
- [ ] OBJPROP_LEVELTEXT
- [ ] OBJPROP_LEVELVALUE
- [ ] OBJPROP_LEVELWIDTH
- [ ] OBJPROP_NAME
- [ ] OBJPROP_PRICE
- [ ] OBJPROP_PRICE1
- [ ] OBJPROP_PRICE2
- [ ] OBJPROP_PRICE3
- [ ] OBJPROP_RAY
- [ ] OBJPROP_RAY_RIGHT
- [ ] OBJPROP_READONLY
- [ ] OBJPROP_SCALE
- [ ] OBJPROP_SELECTABLE
- [ ] OBJPROP_SELECTED
- [ ] OBJPROP_STATE
- [ ] OBJPROP_STYLE
- [ ] OBJPROP_SYMBOL
- [ ] OBJPROP_TEXT
- [ ] OBJPROP_TIME
- [ ] OBJPROP_TIME1
- [ ] OBJPROP_TIME2
- [ ] OBJPROP_TIME3
- [ ] OBJPROP_TIMEFRAMES
- [ ] OBJPROP_TOOLTIP
- [ ] OBJPROP_TYPE
- [ ] OBJPROP_WIDTH
- [ ] OBJPROP_XDISTANCE
- [ ] OBJPROP_XOFFSET
- [ ] OBJPROP_XSIZE
- [ ] OBJPROP_YDISTANCE
- [ ] OBJPROP_YOFFSET
- [ ] OBJPROP_YSIZE
- [ ] OBJPROP_ZORDER
- [x] OP_BUY
- [x] OP_BUYLIMIT
- [x] OP_BUYSTOP
- [x] OP_SELL
- [x] OP_SELLLIMIT
- [x] OP_SELLSTOP
- [ ] PERIOD_CURRENT
- [ ] PERIOD_D1
- [ ] PERIOD_H1
- [ ] PERIOD_H12
- [ ] PERIOD_H2
- [ ] PERIOD_H3
- [ ] PERIOD_H4
- [ ] PERIOD_H6
- [ ] PERIOD_H8
- [ ] PERIOD_M1
- [ ] PERIOD_M10
- [ ] PERIOD_M12
- [ ] PERIOD_M15
- [ ] PERIOD_M2
- [ ] PERIOD_M20
- [ ] PERIOD_M3
- [ ] PERIOD_M30
- [ ] PERIOD_M4
- [ ] PERIOD_M5
- [ ] PERIOD_M6
- [ ] PERIOD_MN1
- [ ] PERIOD_W1
- [ ] POINTER_AUTOMATIC
- [ ] POINTER_DYNAMIC
- [ ] POINTER_INVALID
- [ ] PRICE_CLOSE
- [ ] PRICE_HIGH
- [ ] PRICE_LOW
- [ ] PRICE_MEDIAN
- [ ] PRICE_OPEN
- [ ] PRICE_TYPICAL
- [ ] PRICE_WEIGHTED
- [ ] REASON_ACCOUNT
- [ ] REASON_CHARTCHANGE
- [ ] REASON_CHARTCLOSE
- [ ] REASON_CLOSE
- [ ] REASON_INITFAILED
- [ ] REASON_PARAMETERS
- [ ] REASON_PROGRAM
- [ ] REASON_RECOMPILE
- [ ] REASON_REMOVE
- [ ] REASON_TEMPLATE
- [ ] SATURDAY
- [ ] SEEK_CUR
- [ ] SEEK_END
- [ ] SEEK_SET
- [ ] SELECT_BY_POS
- [ ] SELECT_BY_TICKET
- [ ] SERIES_BARS_COUNT
- [ ] SERIES_FIRSTDATE
- [ ] SERIES_LASTBAR_DATE
- [ ] SERIES_SERVER_FIRSTDATE
- [ ] SHORT_MAX
- [ ] SHORT_MIN
- [ ] SIGNAL_BASE_AUTHOR_LOGIN
- [ ] SIGNAL_BASE_BALANCE
- [ ] SIGNAL_BASE_BROKER
- [ ] SIGNAL_BASE_BROKER_SERVER
- [ ] SIGNAL_BASE_CURRENCY
- [ ] SIGNAL_BASE_DATE_PUBLISHED
- [ ] SIGNAL_BASE_DATE_STARTED
- [ ] SIGNAL_BASE_EQUITY
- [ ] SIGNAL_BASE_GAIN
- [ ] SIGNAL_BASE_ID
- [ ] SIGNAL_BASE_LEVERAGE
- [ ] SIGNAL_BASE_MAX_DRAWDOWN
- [ ] SIGNAL_BASE_NAME
- [ ] SIGNAL_BASE_PIPS
- [ ] SIGNAL_BASE_PRICE
- [ ] SIGNAL_BASE_RATING
- [ ] SIGNAL_BASE_ROI
- [ ] SIGNAL_BASE_SUBSCRIBERS
- [ ] SIGNAL_BASE_TRADE_MODE
- [ ] SIGNAL_BASE_TRADES
- [ ] SIGNAL_INFO_CONFIRMATIONS_DISABLED
- [ ] SIGNAL_INFO_COPY_SLTP
- [ ] SIGNAL_INFO_DEPOSIT_PERCENT
- [ ] SIGNAL_INFO_EQUITY_LIMIT
- [ ] SIGNAL_INFO_ID
- [ ] SIGNAL_INFO_NAME
- [ ] SIGNAL_INFO_SLIPPAGE
- [ ] SIGNAL_INFO_SUBSCRIPTION_ENABLED
- [ ] SIGNAL_INFO_TERMS_AGREE
- [ ] SIGNAL_INFO_VOLUME_PERCENT
- [ ] STAT_BALANCE_DD
- [ ] STAT_BALANCE_DD_RELATIVE
- [ ] STAT_BALANCE_DDREL_PERCENT
- [ ] STAT_BALANCEDD_PERCENT
- [ ] STAT_BALANCEMIN
- [ ] STAT_CONLOSSMAX
- [ ] STAT_CONLOSSMAX_TRADES
- [ ] STAT_CONPROFITMAX
- [ ] STAT_CONPROFITMAX_TRADES
- [ ] STAT_CUSTOM_ONTESTER
- [ ] STAT_DEALS
- [ ] STAT_EQUITY_DD
- [ ] STAT_EQUITY_DD_RELATIVE
- [ ] STAT_EQUITY_DDREL_PERCENT
- [ ] STAT_EQUITYDD_PERCENT
- [ ] STAT_EQUITYMIN
- [ ] STAT_EXPECTED_PAYOFF
- [ ] STAT_GROSS_LOSS
- [ ] STAT_GROSS_PROFIT
- [ ] STAT_INITIAL_DEPOSIT
- [ ] STAT_LONG_TRADES
- [ ] STAT_LOSS_TRADES
- [ ] STAT_LOSSTRADES_AVGCON
- [ ] STAT_MAX_CONLOSS_TRADES
- [ ] STAT_MAX_CONLOSSES
- [ ] STAT_MAX_CONPROFIT_TRADES
- [ ] STAT_MAX_CONWINS
- [ ] STAT_MAX_LOSSTRADE
- [ ] STAT_MAX_PROFITTRADE
- [ ] STAT_MIN_MARGINLEVEL
- [ ] STAT_PROFIT
- [ ] STAT_PROFIT_FACTOR
- [ ] STAT_PROFIT_LONGTRADES
- [ ] STAT_PROFIT_SHORTTRADES
- [ ] STAT_PROFIT_TRADES
- [ ] STAT_PROFITTRADES_AVGCON
- [ ] STAT_RECOVERY_FACTOR
- [ ] STAT_SHARPE_RATIO
- [ ] STAT_SHORT_TRADES
- [ ] STAT_TRADES
- [ ] STAT_WITHDRAWAL
- [ ] STO_CLOSECLOSE
- [ ] STO_LOWHIGH
- [ ] STYLE_DASH
- [ ] STYLE_DASHDOT
- [ ] STYLE_DASHDOTDOT
- [ ] STYLE_DOT
- [ ] STYLE_SOLID
- [ ] SUNDAY
- [ ] SYMBOL_ARROWDOWN
- [ ] SYMBOL_ARROWUP
- [x] SYMBOL_ASK
- [x] SYMBOL_ASKHIGH
- [x] SYMBOL_ASKLOW
- [x] SYMBOL_BID
- [x] SYMBOL_BIDHIGH
- [x] SYMBOL_BIDLOW
- [ ] SYMBOL_CHECKSIGN
- [ ] SYMBOL_CURRENCY_BASE
- [ ] SYMBOL_CURRENCY_MARGIN
- [ ] SYMBOL_CURRENCY_PROFIT
- [ ] SYMBOL_DESCRIPTION
- [ ] SYMBOL_DIGITS
- [ ] SYMBOL_EXPIRATION_MODE SYMBOL_EXPIRATION_TIME
- [ ] SYMBOL_FILLING_MODE
- [x] SYMBOL_LAST
- [x] SYMBOL_LASTHIGH
- [x] SYMBOL_LASTLOW
- [ ] SYMBOL_LEFTPRICE
- [ ] SYMBOL_MARGIN_INITIAL
- [ ] SYMBOL_MARGIN_LIMIT
- [x] SYMBOL_MARGIN_LONG
- [x] SYMBOL_MARGIN_MAINTENANCE
- [x] SYMBOL_MARGIN_SHORT
- [x] SYMBOL_MARGIN_STOP
- [x] SYMBOL_MARGIN_STOPLIMIT
- [ ] SYMBOL_ORDER_MODE
- [ ] SYMBOL_PATH
- [x] SYMBOL_POINT
- [ ] SYMBOL_RIGHTPRICE
- [ ] SYMBOL_SELECT
- [x] SYMBOL_SESSION_AW
- [ ] SYMBOL_SESSION_BUY_ORDERS
- [ ] SYMBOL_SESSION_BUY_ORDERS_VOLUME
- [x] SYMBOL_SESSION_CLOSE
- [ ] SYMBOL_SESSION_DEALS
- [ ] SYMBOL_SESSION_INTEREST
- [ ] SYMBOL_SESSION_OPEN
- [x] SYMBOL_SESSION_PRICE_LIMIT_MAX
- [x] SYMBOL_SESSION_PRICE_LIMIT_MIN
- [x] SYMBOL_SESSION_PRICE_SETTLEMENT
- [ ] SYMBOL_SESSION_SELL_ORDERS
- [x] SYMBOL_SESSION_SELL_ORDERS_VOLUME
- [ ] SYMBOL_SESSION_TURNOVER
- [x] SYMBOL_SESSION_VOLUME
- [ ] SYMBOL_SPREAD
- [ ] SYMBOL_SPREAD_FLOAT
- [ ] SYMBOL_START_TIME
- [ ] SYMBOL_STOPSIGN
- [x] SYMBOL_SWAP_LONG
- [ ] SYMBOL_SWAP_MODE
- [ ] SYMBOL_SWAP_ROLLOVER3DAYS
- [x] SYMBOL_SWAP_SHORT
- [ ] SYMBOL_THUMBSDOWN
- [ ] SYMBOL_THUMBSUP
- [ ] SYMBOL_TIME
- [ ] SYMBOL_TRADE_CALC_MODE
- [x] SYMBOL_TRADE_CONTRACT_SIZE
- [ ] SYMBOL_TRADE_EXECUTION_EXCHANGE
- [ ] SYMBOL_TRADE_EXECUTION_INSTANT
- [ ] SYMBOL_TRADE_EXECUTION_MARKET
- [ ] SYMBOL_TRADE_EXECUTION_REQUEST
- [ ] SYMBOL_TRADE_EXEMODE
- [ ] SYMBOL_TRADE_FREEZE_LEVEL
- [ ] SYMBOL_TRADE_MODE
- [ ] SYMBOL_TRADE_MODE_CLOSEONLY
- [ ] SYMBOL_TRADE_MODE_DISABLED
- [ ] SYMBOL_TRADE_MODE_FULL
- [ ] SYMBOL_TRADE_MODE_LONGONLY
- [ ] SYMBOL_TRADE_MODE_SHORTONLY
- [ ] SYMBOL_TRADE_STOPS_LEVEL
- [x] SYMBOL_TRADE_TICK_SIZE
- [x] SYMBOL_TRADE_TICK_VALUE
- [x] SYMBOL_TRADE_TICK_VALUE_LOSS
- [x] SYMBOL_TRADE_TICK_VALUE_PROFIT
- [x] SYMBOL_VOLUME
- [x] SYMBOL_VOLUME_LIMIT
- [x] SYMBOL_VOLUME_MAX
- [x] SYMBOL_VOLUME_MIN
- [x] SYMBOL_VOLUME_STEP
- [ ] SYMBOL_VOLUMEHIGH
- [ ] SYMBOL_VOLUMELOW
- [ ] TERMINAL_BUILD
- [ ] TERMINAL_CODEPAGE
- [ ] TERMINAL_COMMONDATA_PATH
- [ ] TERMINAL_COMMUNITY_ACCOUNT
- [ ] TERMINAL_COMMUNITY_BALANCE
- [ ] TERMINAL_COMMUNITY_CONNECTION
- [ ] TERMINAL_COMPANY
- [ ] TERMINAL_CONNECTED
- [ ] TERMINAL_CPU_CORES
- [ ] TERMINAL_DATA_PATH
- [ ] TERMINAL_DISK_SPACE
- [ ] TERMINAL_DLLS_ALLOWED
- [ ] TERMINAL_EMAIL_ENABLED
- [ ] TERMINAL_FTP_ENABLED
- [ ] TERMINAL_LANGUAGE
- [ ] TERMINAL_MAXBARS
- [ ] TERMINAL_MEMORY_AVAILABLE
- [ ] TERMINAL_MEMORY_PHYSICAL
- [ ] TERMINAL_MEMORY_TOTAL
- [ ] TERMINAL_MEMORY_USED
- [ ] TERMINAL_MQID
- [ ] TERMINAL_NAME
- [ ] TERMINAL_NOTIFICATIONS_ENABLED
- [ ] TERMINAL_PATH
- [ ] TERMINAL_PING_LAST
- [ ] TERMINAL_SCREEN_DPI
- [ ] TERMINAL_TRADE_ALLOWED
- [ ] THURSDAY
- [ ] TUESDAY
- [ ] UCHAR_MAX
- [ ] UINT_MAX
- [ ] ULONG_MAX
- [ ] USHORT_MAX
- [ ] VOLUME_TICK
- [ ] WEDNESDAY
- [ ] WHOLE_ARRAY
- [ ] WRONG_VALUE

</details>
