
/**
 * @brief The function sets a new size for the first dimension
 *
 * @param array [out] Array for changing sizes.
 * @param new_size [in]  New size for the first dimension.
 * @param reserve_size [in]  Optional parameter. Distributed size to get reserve.
 * @return int If executed successfully, it returns count of all elements contained in the array after resizing, otherwise, returns -1, and array is not resized.
 */
template <typename T>
int ArrayResize(
    T &array,             // array passed by reference
    int new_size,         // new array size
    int reserve_size = 0  // reserve size value (excess)
);