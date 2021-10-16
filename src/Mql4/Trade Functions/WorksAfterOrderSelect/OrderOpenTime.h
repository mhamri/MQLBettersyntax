#include "../../types.h"

/**
 * @brief Returns open time of the currently selected order.
 *
 * @return datetime Open time of the currently selected order.
 * @note The order must be previously selected by the OrderSelect() function.
 */
datetime OrderOpenTime();