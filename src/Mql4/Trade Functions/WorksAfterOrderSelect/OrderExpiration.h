#include "../types.h"

/**
 * @brief Returns expiration date of the selected pending order.
 *
 * @return datetime Expiration date of the selected pending order.
 * @note The order must be previously selected by the OrderSelect() function.
 */
datetime OrderExpiration();