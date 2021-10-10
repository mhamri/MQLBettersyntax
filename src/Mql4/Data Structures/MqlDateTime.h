typedef struct MqlDateTime
{
    // Year
    int year;
    // Month
    int mon;
    // Day
    int day;
    // Hour
    int hour;
    // Minutes
    int min;
    // Seconds
    int sec;
    // Day of week (0-Sunday, 1-Monday, ... ,6-Saturday)
    int day_of_week;
    // Day number of the year (January 1st is assigned the number value of zero)
    int day_of_year;

} MqlDateTime;
