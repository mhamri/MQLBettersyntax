#include <iostream>
using namespace std;

enum ENUM_MODE_MARKET_INFO
{

    //Low day price
    MODE_LOW = 1,

    //High price
    MODE_HIGH = 2,

    //Close price
    MODE_CLOSE = 3,

    /**
   * @brief Volume, used in iLowest() and iHighest() functions
   */
    MODE_VOLUME = 4,

    /**
   * @brief The last incoming tick time (last known server time)
   */
    MODE_TIME = 5,

    /**
   * @brief Last incoming bid price. For the current symbol, it is stored in the predefined variable Bid
   */
    MODE_BID = 9,

    /**
   * @brief Last incoming ask price. For the current symbol, it is stored in the predefined variable Ask
   */
    MODE_ASK = 10,

    /**
   * @brief Point size in the quote currency. For the current symbol, it is stored in the predefined variable Point
   */
    MODE_POINT = 11,

    /**
   * @brief Count of digits after decimal point in the symbol prices. For the current symbol, it is stored in the predefined variable Digits
   */
    MODE_DIGITS = 12,

    /**
   * @brief Spread value in points
   */
    MODE_SPREAD = 13,

    /**
   * @brief Stop level in points
   * 
   * A zero value of MODE_STOPLEVEL means either absence of any restrictions on the minimal distance for Stop Loss/Take Profit or the fact that a trade server utilizes some external mechanisms for dynamic level control, which cannot be translated in the client terminal. In the second case, GetLastError() can return error 130, because MODE_STOPLEVEL is actually "floating" here.
   */
    MODE_STOPLEVEL = 14,

    /**
   * @brief Lot size in the base currency
   */
    MODE_LOTSIZE = 15,

    /**
   * @brief Tick value in the deposit currency
   */
    MODE_TICKVALUE = 16,

    /**
   * @brief Tick size in points
   */
    MODE_TICKSIZE = 17,

    /**
   * @brief Swap of the buy order
   */
    MODE_SWAPLONG = 18,

    /**
   * @brief Swap of the sell order
   */
    MODE_SWAPSHORT = 19,

    /**
   * @brief Market starting date (usually used for futures)
   */
    MODE_STARTING = 20,

    /**
   * @brief Market expiration date (usually used for futures)
   */
    MODE_EXPIRATION = 21,

    /**
   * @brief Trade is allowed for the symbol
   */
    MODE_TRADEALLOWED = 22,

    /**
   * @brief Minimum permitted amount of a lot
   */
    MODE_MINLOT = 23,

    /**
   * @brief Step for changing lots
   */
    MODE_LOTSTEP = 24,

    /**
   * @brief Maximum permitted amount of a lot
   */
    MODE_MAXLOT = 25,

    /**
   * @brief Swap calculation method. 0 - in points; 1 - in the symbol base currency; 2 - by interest; 3 - in the margin currency
   */
    MODE_SWAPTYPE = 26,

    /**
   * @brief Profit calculation mode. 0 - Forex; 1 - CFD; 2 - Futures
   */
    MODE_PROFITCALCMODE = 27,

    /**
   * @brief Margin calculation mode. 0 - Forex; 1 - CFD; 2 - Futures; 3 - CFD for indices
   */
    MODE_MARGINCALCMODE = 28,

    /**
   * @brief Initial margin requirements for 1 lot
   */
    MODE_MARGININIT = 29,

    /**
   * @brief Margin to maintain open orders calculated for 1 lot
   */
    MODE_MARGINMAINTENANCE = 30,

    /**
   * @brief Hedged margin calculated for 1 lot
   */
    MODE_MARGINHEDGED = 31,

    /**
   * @brief Free margin required to open 1 lot for buying
   */
    MODE_MARGINREQUIRED = 32,

    /**
   * @brief Order freeze level in points. If the execution price lies within the range defined by the freeze level, the order cannot be modified, cancelled or closed
   */
    MODE_FREEZELEVEL = 33,

    /**
   * @brief Allowed using OrderCloseBy() to close opposite orders on a specified symbol
   */
    MODE_CLOSEBY_ALLOWED = 34,

};

/**
* @brief Returns various data about securities listed in the "Market Watch" window.
* 
* @param[in] Symbol name.
* @param[in] type Request identifier that defines the type of information to be returned. Can be any of values of @ref ENUM_MODE_MARKET_INFO "request identifiers"
* 
* @return Returns various data about securities listed in the "Market Watch" window. A part of information about the current security is stored in predefined variables
*/
double MarketInfo(
    string symbol,             //< symbol item
    ENUM_MODE_MARKET_INFO type // information type
);