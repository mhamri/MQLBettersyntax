#include "../types.h"

typedef struct MqlTick
{
    // Time of the last prices update
    datetime time;
    // Current Bid price
    double bid;
    // Current Ask price
    double ask;
    // Price of the last deal (Last)
    double last;
    // Volume for the current Last price
    ulong volume;
} MqlTick;
