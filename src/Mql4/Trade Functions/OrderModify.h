#include "../colors.h"
#include "../types.h"

/**
 * @brief Modification of characteristics of the previously opened or pending orders.
 *
 * @param ticket [in]  Unique number of the order ticket.
 * @param price [in]  New open price of the pending order.
 * @param stoploss [in]  New StopLoss level.
 * @param takeprofit [in]  New TakeProfit level.
 * @param expiration [in]  Pending order expiration time.
 * @param arrow_color [in]  Arrow color for StopLoss/TakeProfit modifications in the chart. If the parameter is missing or has CLR_NONE value, the arrows will not be shown in the chart.
 * @return true If the function succeeds, it returns true, otherwise false. To get the detailed error information, call the GetLastError() function.
 * @return false
 *
 * @note Open price and expiration time can be changed only for pending orders. If unchanged values are passed as the function parameters, the error 1 (ERR_NO_RESULT) will be generated.

Pending order expiration time can be disabled in some trade servers. In this case, when a non-zero value is specified in the expiration parameter, the error 147 (ERR_TRADE_EXPIRATION_DENIED) will be generated.

 */
bool OrderModify(
    int ticket,           // ticket
    double price,         // price
    double stoploss,      // stop loss
    double takeprofit,    // take profit
    datetime expiration,  // expiration
    color arrow_color     // color
);