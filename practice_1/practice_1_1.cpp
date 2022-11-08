#include <iostream>


int main()
{
    int input = 0;
    std::cin >> input;

    std::cout << input << " is "<< ( (input % 2 == 0) ? "even" : "odd" ) << std::endl;
    
    return EXIT_SUCCESS;
}
