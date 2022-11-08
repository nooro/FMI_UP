#include <iostream>


int main()
{
    int input = 0;
    std::cin >> input;

    if( (input >= 10) || (input <= -10) )
        std::cout << input / 10 << std::endl;

    return EXIT_SUCCESS;
}
