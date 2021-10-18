/**
 * @brief The function returns the maximal value of two values.
 *
 * @param value1 [in]  First numeric value.
 * @param value2 [in]  Second numeric value.
 * @return double The largest of the two values.
 *
 * @note Instead of MathMax() you can use fmax(). Functions fmax(), fmin(), MathMax(), MathMin() can work with integer types without typecasting them to the type of double.

If parameters of different types are passed into a function, the parameter of the smaller type is automatically cast to the larger type. The type of the return value corresponds to the larger type.

If data of the same type are passed, no casting is performed.

 */
double MathMax(
    double value1,  // first value
    double value2   // second value
);

/**
* @brief The function returns the maximal value of two values.
*
* @param value1 [in]  First numeric value.
* @param value2 [in]  Second numeric value.
* @return double The largest of the two values.
*
* @note Instead of MathMax() you can use fmax(). Functions fmax(), fmin(), MathMax(), MathMin() can work with integer types without typecasting them to the type of double.

If parameters of different types are passed into a function, the parameter of the smaller type is automatically cast to the larger type. The type of the return value corresponds to the larger type.

If data of the same type are passed, no casting is performed.

*/
double fmax(
    double value1,  // first value
    double value2   // second value
);