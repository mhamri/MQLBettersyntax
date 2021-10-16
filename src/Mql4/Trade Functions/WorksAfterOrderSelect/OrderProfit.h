/**
 * @brief Returns profit of the currently selected order.
 *
 * @return double The net profit value (without swaps or commissions) for the selected order. For open orders, it is the current unrealized profit. For closed orders, it is the fixed profit.
 * @note The order must be previously selected by the OrderSelect() function.
 */
double OrderProfit();