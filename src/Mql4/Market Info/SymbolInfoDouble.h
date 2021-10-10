#include <iostream>
using namespace std;

enum ENUM_SYMBOL_INFO_DOUBLE
{

    //Bid - best sell offer
    SYMBOL_BID,

    //Not supported
    SYMBOL_BIDHIGH,

    //Not supported
    SYMBOL_BIDLOW,

    //Ask - best buy offer
    SYMBOL_ASK,

    //Not supported
    SYMBOL_ASKHIGH,

    //Not supported
    SYMBOL_ASKLOW,

    //Not supported
    SYMBOL_LAST,

    //Not supported
    SYMBOL_LASTHIGH,

    //Not supported
    SYMBOL_LASTLOW,

    //Symbol point value
    SYMBOL_POINT,

    //Value of SYMBOL_TRADE_TICK_VALUE_PROFIT
    SYMBOL_TRADE_TICK_VALUE,

    //Not supported
    SYMBOL_TRADE_TICK_VALUE_PROFIT,

    //Not supported
    SYMBOL_TRADE_TICK_VALUE_LOSS,

    //Minimal price change
    SYMBOL_TRADE_TICK_SIZE,

    //Trade contract size
    SYMBOL_TRADE_CONTRACT_SIZE,

    //Minimal volume for a deal
    SYMBOL_VOLUME_MIN,

    //Maximal volume for a deal
    SYMBOL_VOLUME_MAX,

    //Minimal volume change step for deal execution
    SYMBOL_VOLUME_STEP,

    //Not supported
    SYMBOL_VOLUME_LIMIT,

    //Buy order swap value
    SYMBOL_SWAP_LONG,

    //Sell order swap value
    SYMBOL_SWAP_SHORT,

    //Initial margin means the amount in the margin currency required for opening an order with the volume of one lot. It is used for checking a client's assets when he or she enters the market.
    SYMBOL_MARGIN_INITIAL,

    //The maintenance margin. If it is set, it sets the margin amount in the margin currency of the symbol, charged from one lot. It is used for checking a client's assets when his/her account state changes. If the maintenance margin is equal to 0, the initial margin is used.
    SYMBOL_MARGIN_MAINTENANCE,

    // Not supported
    SYMBOL_MARGIN_LONG,

    //Not supported
    SYMBOL_MARGIN_SHORT,

    //Not supported
    SYMBOL_MARGIN_LIMIT,

    //Not supported
    SYMBOL_MARGIN_STOP,

    //Not supported
    SYMBOL_MARGIN_STOPLIMIT,

    //Not supported
    SYMBOL_SESSION_VOLUME,

    //Not supported
    SYMBOL_SESSION_TURNOVER,

    //Not supported
    SYMBOL_SESSION_INTEREST,

    //Not supported
    SYMBOL_SESSION_BUY_ORDERS_VOLUME,

    //Not supported
    SYMBOL_SESSION_SELL_ORDERS_VOLUME,

    //Not supported
    SYMBOL_SESSION_OPEN,

    //Not supported
    SYMBOL_SESSION_CLOSE,

    //Not supported
    SYMBOL_SESSION_AW,

    //Not supported
    SYMBOL_SESSION_PRICE_SETTLEMENT,

    //Not supported
    SYMBOL_SESSION_PRICE_LIMIT_MIN,

    //Not supported
    SYMBOL_SESSION_PRICE_LIMIT_MAX,

};

/**
     * @brief Immediately returns the property value.
     * 
     * @param[in] name  Symbol name.
     * @param[in] prop_id  Identifier of a symbol property. The value can be one of the values of the @ref ENUM_SYMBOL_INFO_DOUBLE enumeration.
     * @return double The value of double type
     */
double SymbolInfoDouble(
    string name,                    // symbol
    ENUM_SYMBOL_INFO_DOUBLE prop_id // identifier of the property
);

/**
     * @brief Returns true or false depending on whether a function is successfully performed. In case of success, the value of the property is placed into a recipient variable, passed by reference by the last parameter.
     * 
     * @param[in] name  Symbol name.
     * @param[in] prop_id  Identifier of a symbol property. The value can be one of the values of the @ref ENUM_SYMBOL_INFO_DOUBLE enumeration.
     * @param[out] double_var 
     * @return true 
     * @return false 
     */
bool SymbolInfoDouble(
    string name,                     // symbol
    ENUM_SYMBOL_INFO_DOUBLE prop_id, // identifier of the property
    double &double_var               // here we accept the property value
);