#include <iostream>


int main()
{
    unsigned int input = 0;
    std::cin >> input;

    if( input >= 1 )
    {
        for( unsigned int row = 1; row <= input; ++row )
        {
            for( unsigned int dollars = 1; dollars <= row; ++dollars )
                printf("$ ");

            printf("\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
    }

    return EXIT_SUCCESS;
}
