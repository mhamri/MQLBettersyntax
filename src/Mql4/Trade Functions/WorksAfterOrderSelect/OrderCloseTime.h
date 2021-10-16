#include "../../types.h"

/**
 * @brief Returns close time of the currently selected order.
 *
 * @return datetime Close time for the currently selected order. If order close time is not 0, then the order selected and has been closed and retrieved from the account history. Open and pending orders close time is equal to 0.
 * @note The order must be previously selected by the OrderSelect() function.
 */
datetime OrderCloseTime();