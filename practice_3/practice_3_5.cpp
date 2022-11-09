#include <iostream>

#define DIGITS_NUM 3


int main()
{
    int input = 0;

    std::cin >> input;


    if( input >= 100 && input <= 999 )
    {
        int digits[DIGITS_NUM] = { input % 10, (input/10)%10, (input/100)%10 };
        bool two_equals_found = false;

        for( int i = 0; i < DIGITS_NUM-1 && !two_equals_found; i++ )
        {
            for( int j = i+1; j < DIGITS_NUM && !two_equals_found; j++ )
            {
                if( digits[i] == digits[j] )
                    two_equals_found = true;
            }
        }

        if( two_equals_found ) { std::cout << "True"  << std::endl; }
        else                   { std::cout << "False" << std::endl; }
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }

    return EXIT_SUCCESS;
}
