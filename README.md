# MQLsyntax

an effort to document MQL (meta trader)

# usage

add this at the top of your `mqh` file

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

and put the `MQLBetterSyntax.mqh` in your include folder.
