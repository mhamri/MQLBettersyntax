#include "../Constants Enumerations Structures/Codes of Errors and Warnings/ENUM_ERR_TradeServerReturnCodes.h"

/**
 * @brief Returns the contents of the system variable _LastError.
 * 
 * @return int Returns the value of the last error that occurred during the execution of an mql4 program.
 * @note After the function call, the contents of _LastError are reset.
 * For convenience, trade errors are additionally listed in the Trade Server Return Codes section.
 */

ENUM_ERR_TradeServerReturnCodes GetLastError();