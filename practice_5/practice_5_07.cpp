#include <iostream>

static void printRightSide( const int row );
static void printLeftSide ( const int row, const int spaces_needed );
static void printCrown    ( const int height );
static void printTrunk    ( const int height );


int main()
{
    int input = 0;
    std::cin >> input;

    if( input > 1 )
    {
        printCrown( input );
        printTrunk( input );
    }
    else
    {
        printf("Invalid input.\n");
    }

    return EXIT_SUCCESS;
}


static void printCrown( const int height )
{
    for( unsigned int row = 1, spaces_needed = height-1; row <= height; ++row, --spaces_needed )
    {
        printLeftSide( row, spaces_needed );
        printRightSide( row );
        printf("\n");
    }
}


static void printLeftSide( const int row, const int spaces_needed )
{
    for( unsigned int space = 0; space < spaces_needed; ++space )
        printf(" ");

    for( unsigned int number = 1; number <= row; ++number )
        printf("%d", number);
}


static void printRightSide( const int row )
{
    for( unsigned int number = row-1; number >= 1; --number )
        printf("%d", number);
}


static void printTrunk( const int height )
{
    for( unsigned int number = height-1; number >= 1; --number )
    {
        for( unsigned int space = 0; space < height-1; ++space )
            printf(" ");

        printf("%d\n", number);
    }
}
