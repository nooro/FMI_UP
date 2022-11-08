#include <iostream>


int main()
{
    int input = 0;
    std::cin >> input;

    std::cout << input << ( (input>=2) && (input<=6) ? " is" : " is not") << " a valid grade" << std::endl;
    
    return EXIT_SUCCESS;
}
