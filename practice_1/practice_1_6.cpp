#include <iostream>
#include <math.h> 

int main()
{
    double num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;

    std::cout << pow(num1+num2, 4) - pow(num1-num2, 2) << std::endl;
    
    return EXIT_SUCCESS;
}
