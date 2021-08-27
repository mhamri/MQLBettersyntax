#include <iostream>
#include "../types.h"
#include "../colors.h"
using namespace std;

enum OrderProperties
{
    // Buy operation
    OP_BUY = 0,
    // Sell operation
    OP_SELL = 1,
    // Buy limit pending order
    OP_BUYLIMIT = 2,
    // Sell limit pending order
    OP_SELLLIMIT = 3,
    // Buy stop pending order
    OP_BUYSTOP = 4,
    // Sell stop pending order
    OP_SELLSTOP = 5,
};

/**
 * @brief The main function used to open market or place a pending order.
 * 
 */
int OrderSend(
    // [in]  Symbol for trading.
    string symbol,
    // Operation type. It can be any of the Trade operation enumeration.
    OrderProperties cmd,
    // [in]  Number of lots.
    double volume,
    // [in]  Order price.
    double price,
    // [in]  Maximum price slippage for buy or sell orders.
    int slippage,
    // [in]  Stop loss level.
    double stoploss,
    // [in]  Take profit level.
    double takeprofit,
    // [in]  Order comment text. Last part of the comment may be changed by server.
    string comment = NULL,
    // [in]  Order magic number. May be used as user defined identifier.
    int magic = 0,
    // [in]  Order expiration time (for pending orders only).
    datetime expiration = 0,
    // [in]  Color of the opening arrow on the chart. If parameter is missing or has CLR_NONE value opening arrow is not drawn on the chart.
    color arrow_color = clrNONE);
