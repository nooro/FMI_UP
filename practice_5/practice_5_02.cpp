#include <iostream>

static void print( int row, int spaces_needed );


int main()
{
    int input = 0;
    std::cin >> input;

    for( int row = 1, spaces_needed = input-1; row <= input; ++row, --spaces_needed )
        print( row, spaces_needed );
    
    for( int row = input-1, spaces_needed = 1; row >= 1; --row, ++spaces_needed )
        print( row, spaces_needed );

    return EXIT_SUCCESS;
}


static void print( int row, int spaces_needed )
{
    for( int space = 0; space < spaces_needed; ++space )
        printf(" ");

    for( int number = row; number >= 1; --number )
        printf("%d", number);

    printf("\n");
}