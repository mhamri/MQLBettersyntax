#include <iostream>
using namespace std;

enum ENUM_SYMBOL_INFO_INTEGER
{
    //Symbol is selected in Market Watch.
    //Some symbols can be hidden in Market Watch, but still they are considered as selected.
    SYMBOL_SELECT,
    //Some symbols can be hidden in Market Watch, but still they are considered as selected.
    //Some symbols (mostly, these are cross rates required for calculation of margin requirements or profits in deposit currency) are selected automatically, but generally are not visible in Market Watch. To be displayed such symbols have to be explicitly selected.
    SYMBOL_VISIBLE,
    //Not supported
    SYMBOL_SESSION_DEALS,
    //Not supported
    SYMBOL_SESSION_BUY_ORDERS,
    //Not supported
    SYMBOL_SESSION_SELL_ORDERS,
    //Not supported
    SYMBOL_VOLUME,
    //Not supported
    SYMBOL_VOLUMEHIGH,
    //Not supported
    SYMBOL_VOLUMELOW,
    //Time of the last quote
    SYMBOL_TIME,
    //Digits after a decimal point
    SYMBOL_DIGITS,
    //Indication of a floating spread
    SYMBOL_SPREAD_FLOAT,
    //Spread value in points
    SYMBOL_SPREAD,
    //Contract price calculation mode
    SYMBOL_TRADE_CALC_MODE,
    //Order execution type
    SYMBOL_TRADE_MODE,
    //Date of the symbol trade beginning (usually used for futures)
    SYMBOL_START_TIME,
    //Date of the symbol trade end (usually used for futures)
    SYMBOL_EXPIRATION_TIME,
    //Minimal indention in points from the current close price to place Stop orders
    SYMBOL_TRADE_STOPS_LEVEL,
    //Distance to freeze trade operations in points
    SYMBOL_TRADE_FREEZE_LEVEL,
    //Deal execution mode
    SYMBOL_TRADE_EXEMODE,
    //Swap calculation model
    SYMBOL_SWAP_MODE,
    //Day of week to charge 3 days swap rollover
    SYMBOL_SWAP_ROLLOVER3DAYS,
    //Not supported
    SYMBOL_EXPIRATION_MODE,
    //Not supported
    SYMBOL_FILLING_MODE,
    //Not supported
    SYMBOL_ORDER_MODE,
};

long SymbolInfoInteger(
    string name,                     // symbol
    ENUM_SYMBOL_INFO_INTEGER prop_id // identifier of a property

);

bool SymbolInfoInteger(
    string name,                      // symbol
    ENUM_SYMBOL_INFO_INTEGER prop_id, // identifier of a property
    long &long_var                    // here we accept the property value
);