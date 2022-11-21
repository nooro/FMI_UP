#include <iostream>

static void printWeight( const int width, const int row );
static void printHandle( const int width, const int row );


int main()
{
    int input = 0;
    std::cin >> input;

    if( input > 2 )
        for( int row = 0; row < input; row++ )
        {
            printWeight( input, row ); // Left weight
            printHandle( input, row ); // Handle
            printWeight( input, row ); // Right weight
            printf("\n");
        }
    else
        printf("Invalid input.\n");

    return EXIT_SUCCESS;
}


static void printWeight( const int width, const int row )
{
    printf(".");

    for( unsigned int i = 1; i < width-1; i++ )
        printf("%c", (((row == 0) || (row == width-1)) ? '.':' '));

    printf(".");
}


static void printHandle( const int width, const int row )
{
    for( int i = 3; i <= width; i++ )
    {
        if( (row == width/2) || ((row == width/2-1) && (width%2 == 0)) )
            printf(".");
        else
            printf(" ");
    }
}
