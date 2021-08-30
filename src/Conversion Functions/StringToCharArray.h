#include <iostream>
using namespace std;
#include "../types.h"
#include "../Constants Enumerations Structures/In Out Contants/Code Page Usage.h"

/**
 * @brief 
 * 
 * @param text_string           [in]  String to copy.
 * @param array[]               [out]  Array of uchar type.
 * @param start=0               [in]  Position from which copying starts. Default - 0.
 * @param count=-1              [in]  Number of array elements to copy. Defines length of a resulting string. Default value is -1, which means copying up to the array end, or till terminating '\0'. Terminating zero will also be copied to the recipient array, in this case the size of a dynamic array can be increased if necessary to the size of the string. If the size of the dynamic array exceeds the length of the string, the size of the array will not be reduced.
 * @param codepage=CP_ACP       [in]  The value of the code page. For the most-used code pages provide appropriate constants.
 * @return int                  Number of copied elements.
 */
int StringToCharArray(
    string text_string,
    uchar &array[],
    int start = 0,
    int count = -1,
    ENUM_CP_CodePageUsage codepage = CP_ACP);