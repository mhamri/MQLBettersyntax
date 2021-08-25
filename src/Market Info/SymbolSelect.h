#include <iostream>
using namespace std;

/**
 * @brief Selects a symbol in the Market Watch window or removes a symbol from the window.
 * 
 * To get symbol data using functions for accessing timeseries and indicators, make sure that the symbol exists in the MarketWatch window. If the symbols is not available in Market watch, enable it using the SymbolSelect(symbol_name, true) function before you request the data.
 * 
 * The symbol can be hidden from MarketWatch after 10 minutes since the last access to the symbol history, i.e. since the call of functions like iOpen(), iHigh(), CopyTime() etc. This is due to the fact that the terminal stores symbol data for 10 minutes since the last access to them; after that unused data are automatically deleted from the terminal memory.
 * 
 * @param[in] name Symbol name.
 * @param[in] select Switch. If the value is false, a symbol should be removed from MarketWatch, otherwise a symbol should be selected in this window. A symbol can't be removed if the symbol chart is open, or there are open orders for this symbol.
 * @return true In case of failure returns false.
 * @return false In case of failure returns false.
 */
bool SymbolSelect(
    string name, // symbol name
    bool select  // add or remove
);