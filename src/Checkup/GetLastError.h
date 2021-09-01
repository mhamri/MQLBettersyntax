// #include "../Constants Enumerations Structures/Codes of Errors and Warnings/ENUM_ERR_TradeServerReturnCodes.h"

/**
 * @brief GetLastError() - returns error codes. Error codes are defined in stderror.mqh. To print the error description you can use the ErrorDescription() function, defined in stdlib.mqh.
 * 
 */
enum ENUM_ERR_TradeServerReturnCodes
{
    //No error returned
    ERR_NO_ERROR = 0,

    //No error returned, but the result is unknown
    ERR_NO_RESULT = 1,

    //Common error
    ERR_COMMON_ERROR = 2,

    //Invalid trade parameters
    ERR_INVALID_TRADE_PARAMETERS = 3,

    //Trade server is busy
    ERR_SERVER_BUSY = 4,

    //Old version of the client terminal
    ERR_OLD_VERSION = 5,

    //No connection with trade server
    ERR_NO_CONNECTION = 6,

    //Not enough rights
    ERR_NOT_ENOUGH_RIGHTS = 7,

    //Too frequent requests
    ERR_TOO_FREQUENT_REQUESTS = 8,

    //Malfunctional trade operation
    ERR_MALFUNCTIONAL_TRADE = 9,

    //Account disabled
    ERR_ACCOUNT_DISABLED = 64,

    //Invalid account
    ERR_INVALID_ACCOUNT = 65,

    //Trade timeout
    ERR_TRADE_TIMEOUT = 128,

    //Invalid price
    ERR_INVALID_PRICE = 129,

    //Invalid stops
    ERR_INVALID_STOPS = 130,

    //Invalid trade volume
    ERR_INVALID_TRADE_VOLUME = 131,

    //Market is closed
    ERR_MARKET_CLOSED = 132,

    //Trade is disabled
    ERR_TRADE_DISABLED = 133,

    //Not enough money
    ERR_NOT_ENOUGH_MONEY = 134,

    //Price changed
    ERR_PRICE_CHANGED = 135,

    //Off quotes
    ERR_OFF_QUOTES = 136,

    //Broker is busy
    ERR_BROKER_BUSY = 137,

    //Requote
    ERR_REQUOTE = 138,

    //Order is locked
    ERR_ORDER_LOCKED = 139,

    //Buy orders only allowed
    ERR_LONG_POSITIONS_ONLY_ALLOWED = 140,

    //Too many requests
    ERR_TOO_MANY_REQUESTS = 141,

    //Modification denied because order is too close to market
    ERR_TRADE_MODIFY_DENIED = 145,

    //Trade context is busy
    ERR_TRADE_CONTEXT_BUSY = 146,

    //Expirations are denied by broker
    ERR_TRADE_EXPIRATION_DENIED = 147,

    //The amount of open and pending orders has reached the limit set by the broker
    ERR_TRADE_TOO_MANY_ORDERS = 148,

    //An attempt to open an order opposite to the existing one when hedging is disabled
    ERR_TRADE_HEDGE_PROHIBITED = 149,

    //An attempt to close an order contravening the FIFO rule
    ERR_TRADE_PROHIBITED_BY_FIFO = 150,

};

/**
 * @brief Returns the contents of the system variable _LastError.
 * 
 * @return ENUM_ERR_TradeServerReturnCodes Returns the value of the last error that occurred during the execution of an mql4 program.
 * @note After the function call, the contents of _LastError are reset.
 * For convenience, trade errors are additionally listed in the Trade Server Return Codes section.
 */
ENUM_ERR_TradeServerReturnCodes GetLastError();