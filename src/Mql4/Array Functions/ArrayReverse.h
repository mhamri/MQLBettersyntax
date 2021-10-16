#include "./../global.h"
#include "./../types.h"

/**
 * @brief
 *
 * @param array [in][out]  Array.
 * @param start =0 [in]  Index the array reversal starts from.
 * @param count =WHOLE_ARRAY [in]  Number of reversed elements. If WHOLE_ARRAY, then all array elements are moved in the inversed manner starting with the specified start index up to the end of the array.
 * @return true Returns true if successful, otherwise - false.
 * @return false
 */
template <typename T>
bool ArrayReverse(
    T &array,                 // array of any type
    uint start = 0,           // index to start reversing the array from
    uint count = WHOLE_ARRAY  // number of elements
);