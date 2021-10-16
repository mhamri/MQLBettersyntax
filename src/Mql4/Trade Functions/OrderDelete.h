#include "../colors.h"

/**
 * @brief Deletes previously opened pending order.
 *
 * @param ticket [in]  Unique number of the order ticket.
 * @param arrow_color [in]  Color of the arrow on the chart. If the parameter is missing or has CLR_NONE value arrow will not be drawn on the chart.
 * @return true If the function succeeds, it returns true, otherwise false. To get the detailed error information, call the GetLastError() function.
 * @return false
 */
bool OrderDelete(
    int ticket,
    color arrow_color);