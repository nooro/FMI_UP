#include <iostream>


int main()
{
    int input_a = 0, input_b = 0;

    std::cin >> input_a >> input_b;


    if( input_a != input_b )
        std::cout << (input_a > input_b ? input_a : input_b) << std::endl;
    else
        std::cout << "Equal numbers" << std::endl;


    return EXIT_SUCCESS;
}
