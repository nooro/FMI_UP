#include <iostream>


static std::string check( int num )
{
    std::string result = "";

    if     ( num < 100 ) { result = "Less than 100";       }
    else if( num > 200 ) { result = "Greater than 200";    }
    else                 { result = "Between 100 and 200"; }

    return result;
}


int main()
{
    int input = 0;
    std::cin >> input;

    std::cout << check(input) << std::endl;

    return EXIT_SUCCESS;
}
