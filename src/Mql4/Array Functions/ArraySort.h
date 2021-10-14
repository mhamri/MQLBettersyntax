#include "./../global.h"
#include "./MODE_ARRAY_SORT_DIRECTION.h"

/**
 * @brief Sorts numeric arrays by first dimension. The AS_SERIES flag is taken into account in sorting.
 *
 * @param array[]  [in][out]  Numeric array for sorting.
 * @param count [in]  Count of elements to sort. By default, it sorts the whole array.
 * @param start [in]  Starting index to sort. By default, the sort starts at the first element.
 * @param direction [in]  Sort direction. It can be any of the following values: MODE_ASCEND, MODE_DESCEND
 * @return true
 * @return false
 */
template <typename T>
bool ArraySort(
    T &array,
    int count = WHOLE_ARRAY,
    int start = 0,
    φMODE_ARRAY_SORT_DIRECTION_ENUM direction = MODE_ASCEND);