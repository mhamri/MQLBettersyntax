/**
 * @brief Prints information about the selected order in the log in the following format:
 * #ticket number; open time; trade operation; amount of lots; symbol; open price; Stop Loss; Take Profit; close time; close price; commission; swap; profit; comment; magic number; pending order expiration date.
 *
 * @note The order must be previously selected by the OrderSelect() function.
 */
void OrderPrint();