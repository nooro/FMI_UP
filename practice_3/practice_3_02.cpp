#include <iostream>


int main()
{
    int input_a = 0, input_b = 0, input_c = 0;

    std::cin >> input_a >> input_b >> input_c;


    if( (input_a == input_b) && (input_a == input_c) )
        std::cout << "Equal numbers" << std::endl;
    else
        std::cout << ( input_a > input_b ? (input_a > input_c ? input_a : input_c) : (input_b > input_c ? input_b : input_c) ) << std::endl;


    return EXIT_SUCCESS;
}
