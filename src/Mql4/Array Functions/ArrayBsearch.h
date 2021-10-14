#include "./../global.h"
#include "./MODE_ARRAY_SORT_DIRECTION.h"
/**
 * @brief //Searches for a specified value in a multidimensional numeric array sorted in the ascending order. The search is performed in the first dimension taking into account the AS_SERIES flag.
 *
 * @param array array for search
 * @param value what is searched for
 * @param count count of elements to search for
 * @param start starting position
 * @param direction search direction
 * @return int
 */

int ArrayBsearch(
    const double array[],
    double value,
    int count = WHOLE_ARRAY,
    int start = 0,
    φMODE_ARRAY_SORT_DIRECTION_ENUM direction = MODE_ASCEND);

/**
 * @brief //Searches for a specified value in a multidimensional numeric array sorted in the ascending order. The search is performed in the first dimension taking into account the AS_SERIES flag.
 *
 * @param array array for search
 * @param value what is searched for
 * @param count count of elements to search for
 * @param start starting position
 * @param direction search direction
 * @return int
 */
int ArrayBsearch(
    const float array[],
    float value,
    int count = WHOLE_ARRAY,
    int start = 0,
    φMODE_ARRAY_SORT_DIRECTION_ENUM direction = MODE_ASCEND);

/**
 * @brief //Searches for a specified value in a multidimensional numeric array sorted in the ascending order. The search is performed in the first dimension taking into account the AS_SERIES flag.
 *
 * @param array array for search
 * @param value what is searched for
 * @param count count of elements to search for
 * @param start starting position
 * @param direction search direction
 * @return int
 */
int ArrayBsearch(
    const long array[],
    long value,
    int count = WHOLE_ARRAY,
    int start = 0,
    φMODE_ARRAY_SORT_DIRECTION_ENUM direction = MODE_ASCEND);

/**
 * @brief //Searches for a specified value in a multidimensional numeric array sorted in the ascending order. The search is performed in the first dimension taking into account the AS_SERIES flag.
 *
 * @param array array for search
 * @param value what is searched for
 * @param count count of elements to search for
 * @param start starting position
 * @param direction search direction
 * @return int
 */
int ArrayBsearch(
    const short array[],
    short value,
    int count = WHOLE_ARRAY,
    int start = 0,
    φMODE_ARRAY_SORT_DIRECTION_ENUM direction = MODE_ASCEND);

/**
 * @brief //Searches for a specified value in a multidimensional numeric array sorted in the ascending order. The search is performed in the first dimension taking into account the AS_SERIES flag.
 *
 * @param array array for search
 * @param value what is searched for
 * @param count count of elements to search for
 * @param start starting position
 * @param direction search direction
 * @return int
 */
int ArrayBsearch(
    const char array[],
    char value,
    int count = WHOLE_ARRAY,
    int start = 0,
    φMODE_ARRAY_SORT_DIRECTION_ENUM direction = MODE_ASCEND);