#include <iostream>


int main()
{
    float input = 0;

    std::cin >> input;

    std::cout << (input < 0 ? "Negative " : "Positive ");

    if( input==(int)input )
        std::cout << ((int)input%2 == 0 ? "even" : "odd") << " integer\n";
    else
        std::cout << "rational number\n";

    return EXIT_SUCCESS;
}
