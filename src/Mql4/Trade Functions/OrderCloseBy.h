#include "../colors.h"

/**
 * @brief Closes an opened order by another opposite opened order.
 *
 * @param ticket [in]  Unique number of the order ticket.
 * @param opposite [in]  Unique number of the opposite order ticket.
 * @param arrow_color [in]  Color of the closing arrow on the chart. If the parameter is missing or has CLR_NONE value closing arrow will not be drawn on the chart.
 * @return true Returns true if successful, otherwise false. To get additional error information, one has to call the GetLastError() function.
 * @return false
 */
bool OrderCloseBy(
    int ticket,        // ticket to close
    int opposite,      // opposite ticket
    color arrow_color  // color
);