#include <iostream>


int main()
{
    int input = 0;
    int sum = 0;

    do
    {
        std::cin >> input;
        sum += input;
    } while( input != 0 );

    std::cout << sum << std::endl;
    
    return EXIT_SUCCESS;
}
