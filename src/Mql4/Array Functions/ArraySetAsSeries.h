#include "./../global.h"
#include "./../types.h"

/**
 * @brief Reverses the specified number of elements in the array starting with a specified index.
 *
 * @param array[] [in][out]  Array.
 * @param start [in]  Index the array reversal starts from.
 * @param count [in]  Number of reversed elements. If WHOLE_ARRAY, then all array elements are moved in the inversed manner starting with the specified start index up to the end of the array.
 * @return true Returns true if successful, otherwise - false.
 * @return false
 */
template <typename T>
bool ArrayReverse(
    T &array,
    uint start = 0,
    uint count = WHOLE_ARRAY);