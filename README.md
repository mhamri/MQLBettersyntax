# MQLsyntax

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
