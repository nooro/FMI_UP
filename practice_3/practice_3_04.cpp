#include <iostream>

#define NUM_OF_INPUTS 3


int main()
{
    int input[NUM_OF_INPUTS]  = { 0 };
    int idx_smallest = 0;

    for( int i = 0; i < NUM_OF_INPUTS; i++ )
        std::cin >> input[i];


    for( int i = 0; i < NUM_OF_INPUTS-1; i++ )
    {
        idx_smallest = i;

        for( int j = i+1; j < NUM_OF_INPUTS; j++ )
        {
            if( input[j] <  input[idx_smallest] )
                idx_smallest = j;
        }

        if( i != idx_smallest )
        {
            int swapper = input[i];
            input[i] = input[idx_smallest];
            input[idx_smallest] = swapper;
        }
    }

    for( int num : input )
        std::cout << num << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
