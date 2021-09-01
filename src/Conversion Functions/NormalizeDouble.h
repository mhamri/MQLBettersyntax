/**
 * @brief Rounding floating point number to a specified accuracy.
 * 
 * @param value [in] Value with a floating point.
 * @param digits [in]  Accuracy format, number of digits after point (0-8).
 * @return double Value of double type with preset accuracy.
 * 
 * @note Calculated values of StopLoss, TakeProfit, and values of open prices for pending orders must be normalized with the accuracy, the value of which can be obtained by Digits().
 */
double NormalizeDouble(
    double value, // normalized number
    int digits    // number of digits after decimal point
);