#include "./../global.h"

/**
 * @brief It copies an array into another one.
 *
 * @param dst_array [out]  Destination array
 * @param src_array [in]  Source array
 * @param dst_start [in]  Starting index from the destination array. By default, start index is 0.
 * @param src_start [in]  Starting index for the source array. By default, start index is 0.
 * @param count [in]  Number of elements that should be copied. By default, the whole array is copied (count=WHOLE_ARRAY).
 * @return int It returns the number of copied elements.
 */
template <typename T>
int ArrayCopy(
    T &dst_array,
    const T src_array,
    int dst_start = 0,
    int src_start = 0,
    int count = WHOLE_ARRAY);