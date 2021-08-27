#include "../types.h"

typedef struct MqlRates
{
    // Period start time
    datetime time;
    // Open price
    double open;
    // The highest price of the period
    double high;
    // The lowest price of the period
    double low;
    // Close price
    double close;
    // Tick volume
    long tick_volume;
    // Spread
    int spread;
    // Trade volume
    long real_volume;

} MqlRates;
