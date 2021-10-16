#include "../../Constants Enumerations Structures/Trade Constants/ENUM_OP_OrderProperties.h"

/**
 * @brief Returns order operation type of the currently selected order.
 *
 * @return int Order operation type of the currently selected order. It can be any of the following values:

OP_BUY - buy order,
OP_SELL - sell order,
OP_BUYLIMIT - buy limit pending order,
OP_BUYSTOP - buy stop pending order,
OP_SELLLIMIT - sell limit pending order,
OP_SELLSTOP - sell stop pending order.

 */
ENUM_OP_OrderProperties OrderType();