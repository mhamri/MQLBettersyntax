#include <iostream>
using namespace std;
#include "../types.h"
#include "../Constants Enumerations Structures/In Out Contants/Code Page Usage.h"

/**
 * @brief It copies and converts part of array of uchar type into a returned string.
 * @param array[]            [in]  Array of uchar type.
 * @param start=0            [in]  Position from which copying starts. by default 0 is used.
 * @param count=-1           [in]  Number of array elements for copying. Defines the length of a resulting string. Default value is -1, which means copying up to the array end, or till terminal 0.
 * @param codepage=CP_ACP    [in]  The value of the code page. There is a number of built-in constants for the most used code pages.
 * @return string 
 */
string CharArrayToString(
    uchar array[],
    int start = 0,
    int count = -1,
    ENUM_CP_CodePageUsage codepage = CP_ACP);
