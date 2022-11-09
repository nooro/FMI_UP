#include <iostream>



#define SECONDS_IN_YEAR   31536000
#define SECONDS_IN_DAY    86400
#define SECONDS_IN_HOUR   3600
#define SECONDS_IN_MINUTE 60



typedef struct
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
} date_time_t;

typedef struct
{
    unsigned int days;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
} output_t;

typedef long long int seconds_t;



static bool      readDateTime     ( date_time_t* dt );
static bool      isValidDate      ( date_time_t* dt );
static bool      isValidTime      ( date_time_t* dt );
static seconds_t dateTimeInSeconds( date_time_t* dt );
static int       getDayNumber     ( date_time_t* dt );
static bool      isLeapYear       ( int year );
static int       daysInMonth      ( int month, int year );
static int       leapYearsTo      ( int year );
static void      formatOutput     ( seconds_t* seconds, output_t* output );
static void      printOutput      ( output_t* output );



int main()
{
    date_time_t dt[2];
    seconds_t dt_in_seconds[2];
    output_t output;

    if( readDateTime(&dt[0]) && readDateTime(&dt[1]) )
    {
        if( isValidDate(&dt[0]) && isValidDate(&dt[1]) )
        {
            if( isValidTime(&dt[0]) && isValidTime(&dt[1]) )
            {
                dt_in_seconds[0] = dateTimeInSeconds(&dt[0]);
                dt_in_seconds[1] = dateTimeInSeconds(&dt[1]);

                seconds_t time_diff_in_seconds = 
                (dt_in_seconds[0]>dt_in_seconds[1]) ? (dt_in_seconds[0]-dt_in_seconds[1]) : (dt_in_seconds[1]-dt_in_seconds[0]);

                formatOutput( &time_diff_in_seconds, &output );
                printOutput( &output );
            }
            else
            {
                printf( "Invalid time entered\n" );
            }
        }
        else
        {
            printf( "Invalid date entered\n" );
        }
    }

    return EXIT_SUCCESS;
}



static bool readDateTime( date_time_t* date_time )
{
    bool ret_val = false;
    char dummy = 0u;

    if( nullptr != date_time )
    {
        std::cin >> date_time->day  >> dummy >> date_time->month  >> dummy >> date_time->year;
        std::cin >> date_time->hour >> dummy >> date_time->minute >> dummy >> date_time->second;

        ret_val = true;
    }

    return ret_val;
}



static bool isValidDate( date_time_t* date_time )
{
    bool ret_val = false;

    if( (date_time->year>=0) && (date_time->year<=9999) )
    {
        if( (date_time->month>=1) && (date_time->month<=12) )
        {
            if( date_time->day >= 1 )
            {
                if( date_time->day <= daysInMonth((int)date_time->month, (int)date_time->year) )
                {
                    ret_val = true;
                }
            }
        }
    }

    return ret_val;
}



static int daysInMonth( int month, int year )
{
    static const unsigned int months_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    unsigned int days = months_days[month-1];

    if( 2 == month )
    {
        if( true == isLeapYear(year) )
        {
            days = 29;
        }
    }

    return days;
}



static bool isLeapYear( int year )
{
    return ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0);
}



static bool isValidTime( date_time_t* dt )
{
    return (dt->hour>=0) && (dt->hour<=23) && (dt->minute>=0) && (dt->minute<=59) && (dt->second>=0) && (dt->second<=59);
}



static seconds_t dateTimeInSeconds( date_time_t* dt )
{
    seconds_t seconds = dt->second;

    seconds += (seconds_t)dt->minute * SECONDS_IN_MINUTE;
    seconds += (seconds_t)dt->hour * SECONDS_IN_HOUR;
    seconds += (seconds_t)getDayNumber(dt) * SECONDS_IN_DAY;
    seconds += (seconds_t)dt->year * SECONDS_IN_YEAR;
    seconds += (seconds_t)leapYearsTo(dt->year-1) * SECONDS_IN_DAY;

    return seconds;
}



static int getDayNumber( date_time_t* dt )
{
    int days = (int)dt->day;

    for( int i = 1; i < dt->month; i++ )
    {
        days += daysInMonth(i, (int)dt->year);
    }

    return days;
}



static int leapYearsTo( int year )
{
    return ((year/4)-(year/100)+(year/400)) + 1;
}



static void formatOutput( seconds_t* seconds, output_t* output )
{
    output->days = (unsigned int)(*seconds / SECONDS_IN_DAY);
    *seconds -= output->days * SECONDS_IN_DAY;

    output->hours = (unsigned int)*seconds / SECONDS_IN_HOUR;
    *seconds -= output->hours * SECONDS_IN_HOUR;

    output->minutes = (unsigned int)*seconds / SECONDS_IN_MINUTE;
    *seconds -= output->minutes * SECONDS_IN_MINUTE;

    output->seconds = (unsigned int)*seconds;
}



static void printOutput( output_t* output )
{
    if( output->days > 0 )
        printf("%d-", output->days);
    
    printf("%02d:%02d:%02d\n", output->hours, output->minutes, output->seconds );
}
