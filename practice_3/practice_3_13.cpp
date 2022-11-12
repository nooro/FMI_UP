#include <iostream>


typedef struct
{
    int day;
    int month;
    int year;
} date_t;


static bool isValidDate( const date_t* date );
static int  daysInMonth( const date_t* date );
static bool isLeapYear ( const int year );
static void setNextDate( date_t* date );


int main()
{
    date_t date;
    std::cin >> date.day >> date.month >> date.year;

    if( isValidDate(&date) )
    {
        setNextDate(&date);
        printf("%02d.%02d.%04d\n", date.day, date.month, date.year);
    }
    else
    {
        printf("Invalid date entered\n");
    }

    return EXIT_SUCCESS;
}

static bool isLeapYear( const int year )
{
    return ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0);
}

static int daysInMonth( const date_t* date )
{
    static const unsigned int months_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    unsigned int days = months_days[date->month-1];

    if( 2 == date->month )
    {
        if( true == isLeapYear(date->year) )
            days = 29;
    }

    return days;
}

static bool isValidDate( const date_t* date )
{
    bool ret_val = false;

    if( (date->month >= 1) && (date->month <= 12) )
    {
        if( date->day >= 1 )
        {
            if( date->day <= daysInMonth(date) )
            {
                ret_val = true;
            }
        }
    }

    return ret_val;
}

static void setNextDate( date_t* date )
{
    date->day++;
    if( date->day > daysInMonth(date) )
    {
        date->day = 1;
        date->month++;
        if( date->month > 12 )
        {
            date->month = 1;
            date->year++;
        }
    }
}
