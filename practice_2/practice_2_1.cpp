#include <iostream>


static std::string days_of_the_week[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };


static std::string numToDay( int num )
{
    std::string day = "";

    if( (num >= 1) && (num <= 7) )
        day = days_of_the_week[num-1];
    else
        day = "Invalid day";

    return day;
}


int main()
{
    int input = 0;
    std::cin >> input;

    std::cout << numToDay(input) << std::endl;

    return EXIT_SUCCESS;
}
