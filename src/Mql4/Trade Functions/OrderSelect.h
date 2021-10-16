#include "./ENUM_MODE_ORDER_POOL.h"
#include "./ENUM_SELECT_BY.h"
/**
 * @brief The function selects an order for further processing.
 *
 * @param index [in]  Order index or order ticket depending on the second parameter.
 * @param select Selecting flags. It can be any of the following values: SELECT_BY_POS - index in the order pool,  SELECT_BY_TICKET - index is order ticket.
 * @param pool [in]  Optional order pool index. Used when the selected parameter is SELECT_BY_POS. It can be any of the following values:MODE_TRADES (default)- order selected from trading pool(opened and pending orders),
MODE_HISTORY - order selected from history pool (closed and canceled order).
 * @return true
 * @return false
 */
bool OrderSelect(
    int index,
    ENUM_SELECT_BY select,
    ENUM_MODE_ORDER_POOL pool = MODE_TRADES);