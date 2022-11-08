#include <iostream>


static std::string speedCheck( float speed )
{
    std::string result;

    if     ( speed <=   10.0 ) { result = "Slow";          }
    else if( speed <=   50.0 ) { result = "Average";       }
    else if( speed <=  150.0 ) { result = "Fast";          }
    else if( speed <= 1000.0 ) { result = "Ultra fast";    }
    else                       { result = "Extremly fast"; }

    return result;
}


int main()
{
    float input = 0.0;
    std::cin >> input;

    std::cout << speedCheck(input) << std::endl;

    return EXIT_SUCCESS;
}
