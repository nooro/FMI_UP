#include <iostream>


int main()
{
    int input = 0;
    std::cin >> input;
    
    for( int row = 1; row <= input; row++ )
    {
        if( (row == 1) || (row == input) ) printf("+ ");
        else                               printf("| ");

        for( int col = 2; col <= input - 1; col++ )
            printf("- ");

        if( (row == 1) || (row == input) ) printf("+\n");
        else                               printf("|\n");
    }

    return EXIT_SUCCESS;
}
