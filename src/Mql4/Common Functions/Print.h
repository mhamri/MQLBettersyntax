#include <iostream>
using namespace std;

/**
 * @brief It enters a message in the Expert Advisor log. Parameters can be of any type.
 * 
 * @param ... [in]  Any values separated by commas. The number of parameters cannot exceed 64.
 * 
 * @note Arrays cannot be passed to the Print() function. Arrays must be input element-by-element. 
 * Data of double type are shown with the accuracy of up to  16 digits after a decimal point, and can be output either in traditional or in scientific format, depending on what entry will be more compact. Data of float type are output with 5 digits after a decimal point. To output real numbers with another accuracy or in a predefined format, use the @ref PrintFormat() function. 
 * Data of bool type are output as "true" or "false" lines. Dates are shown as YYYY.MM.DD HH:MI:SS. To show data in another format, use @ref TimeToString(). Data of color type are returned either as R,G,B line or as a color name, if this color is present in the color set.
 * 
 * Print() function does not work during optimization in the Strategy Tester.
 */
void Print(
    ...);