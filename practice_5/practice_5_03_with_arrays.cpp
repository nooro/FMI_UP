#include <iostream>

static void printSpiral( int* spiral, const int height, const int width );


int main()
{
    int input = 0, number = 1;
    std::cin >> input;

    int spiral[input][input];

    for( int col = 0; col < input; ++col )
    {
        for( int row = 0; row < input; ++row, ++number )
            spiral[row][col] = number;

        if( (col < input-1) && (++col) )
            for( int row = input - 1; row >= 0; --row, ++number )
                spiral[row][col] = number;
    }

    printSpiral( *spiral, input, input );

    return EXIT_SUCCESS;
}


static void printSpiral( int* spiral, const int height, const int width )
{
    for( int i = 0; i < height; i++ )
    {
        for( int j = 0; j < width; j++ )
            printf("%.2d ", spiral[i*width + j]);

        printf("\n");
    }
}
