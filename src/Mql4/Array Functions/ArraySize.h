/**
 * @brief The function returns the number of elements of a selected array. 
 * 
 * @param array [in]  Array of any type.
 * @return int Value of int type.
 * 
 * @note For a one-dimensional array, the value to be returned by the ArraySize is equal to that of ArrayRange(array,0).
 */
template <class T>
int ArraySize(
    const T *array // checked array
);