#include <iostream>
using namespace std;

/**
 * @brief Converting numeric value into text string.
 * 
 * @param value [in]  Value with a floating point.
 * @param digits [in]  Accuracy format. If the digits value is in the range between 0 and 16, a string presentation of a number with the specified number of digits after the point will be obtained. If the digits value is in the range between -1 and -16, a string representation of a number in the scientific format with the specified number of digits after the decimal point will be obtained. In all other cases the string value will contain 8 digits after the decimal point.
 * @return string String containing a symbol representation of a number with the specified accuracy.
 */
string DoubleToString(
    double value,  // number
    int digits = 8 // number of digits after decimal point
);