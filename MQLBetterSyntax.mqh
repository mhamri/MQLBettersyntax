
#include <iostream>
using namespace std;

namespace φMarket_Info{
	
	
	enum ENUM_MARKET_INFO
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
	* @param[in] type Request identifier that defines the type of information to be returned. Can be any of values of @ref ENUM_MARKET_INFO "request identifiers"
	* 
	* @return Returns various data about securities listed in the "Market Watch" window. A part of information about the current security is stored in predefined variables
	*/
	double MarketInfo(
	    string symbol,        //< symbol item
	    ENUM_MARKET_INFO type // information type
	);
	
	
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
	
	
	/**
	 * @brief Returns the name of a symbol.
	 * 
	 * @param[in] pos Order number of a symbol.
	 * @param[in] selected Request mode. If the value is true, the symbol is taken from the list of symbols selected in MarketWatch. If the value is false, the symbol is taken from the general list.
	 * @return string Value of string type with the symbol name.
	 */
	string SymbolName(
	    int pos,      // number in the list
	    bool selected // true - only symbols in MarketWatch
	);
	
	
	/**
	 * @brief Selects a symbol in the Market Watch window or removes a symbol from the window.
	 * 
	 * To get symbol data using functions for accessing timeseries and indicators, make sure that the symbol exists in the MarketWatch window. If the symbols is not available in Market watch, enable it using the SymbolSelect(symbol_name, true) function before you request the data.
	 * 
	 * The symbol can be hidden from MarketWatch after 10 minutes since the last access to the symbol history, i.e. since the call of functions like iOpen(), iHigh(), CopyTime() etc. This is due to the fact that the terminal stores symbol data for 10 minutes since the last access to them; after that unused data are automatically deleted from the terminal memory.
	 * 
	 * @param[in] name Symbol name.
	 * @param[in] select Switch. If the value is false, a symbol should be removed from MarketWatch, otherwise a symbol should be selected in this window. A symbol can't be removed if the symbol chart is open, or there are open orders for this symbol.
	 * @return true In case of failure returns false.
	 * @return false In case of failure returns false.
	 */
	bool SymbolSelect(
	    string name, // symbol name
	    bool select  // add or remove
	);
	/**
	 * @brief Returns the number of available (selected in Market Watch or all) symbols.
	 * 
	 * @param selected Request mode. Can be true or false.
	 * @return int If the 'selected' parameter is true, the function returns the number of symbols selected in MarketWatch. If the value is false, it returns the total number of all symbols.
	 */
	int SymbolsTotal(
	    bool selected // True - only symbols in MarketWatch
	);
	
}
using namespace φMarket_Info;

#define __MQLBUILD__ 0


