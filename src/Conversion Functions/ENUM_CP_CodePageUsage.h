enum ENUM_CP_CodePageUsage
{
    //The current Windows ANSI code page.
    CP_ACP = 0,

    //The current system OEM code page.
    CP_OEMCP = 1,

    /**
     * @brief The current system Macintosh code page.
     * Note: This value is mostly used in earlier created program codes and is of no use now, since modern Macintosh computers use Unicode for encoding.
     */
    CP_MACCP = 2,

    //The Windows ANSI code page for the current thread.
    CP_THREAD_ACP = 3,

    //Symbol code page
    CP_SYMBOL = 42,

    //UTF-7 code page.
    CP_UTF7 = 65000,

    //UTF-8 code page.
    CP_UTF8 = 65001,

};