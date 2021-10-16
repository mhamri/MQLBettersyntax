#include "../colors.h"

/**
 * @brief Closes opened order.
 *
 * @param ticket [in]  Unique number of the order ticket.
 * @param lots [in]  Number of lots.
 * @param price [in]  Closing price.
 * @param slippage [in]  Value of the maximum price slippage in points.
 * @param arrow_color [in] Color of the closing arrow on the chart. If the parameter is missing or has CLR_NONE value closing arrow will not be drawn on the chart.
 * @return true
 * @return false
 */
bool OrderClose(
    int ticket,
    double lots,
    double price,
    int slippage,
    color arrow_color);