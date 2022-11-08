#include <iostream>


static int reverse( int num )
{
    int reversed = 0;

    while( num != 0 )
    {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    return reversed;
}


int main()
{
    int input = 0;
    std::cin >> input;

    std::cout << reverse(input) + 1 << std::endl;
    
    return EXIT_SUCCESS;
}
