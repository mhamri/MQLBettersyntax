#include <iostream>
using namespace std;

/**
 * @brief Returns the name of a symbol.
 * 
 * @param[in] pos Order number of a symbol.
 * @param[in] selected Request mode. If the value is true, the symbol is taken from the list of symbols selected in MarketWatch. If the value is false, the symbol is taken from the general list.
 * @return string Value of string type with the symbol name.
 */
string SymbolName(
    int pos,      // number in the list
    bool selected // true - only symbols in MarketWatch
);