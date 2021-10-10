/**
 * @brief Returns the number of available (selected in Market Watch or all) symbols.
 * 
 * @param selected Request mode. Can be true or false.
 * @return int If the 'selected' parameter is true, the function returns the number of symbols selected in MarketWatch. If the value is false, it returns the total number of all symbols.
 */
int SymbolsTotal(
    bool selected // True - only symbols in MarketWatch
);