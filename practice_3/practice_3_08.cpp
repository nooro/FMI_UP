#include <iostream>

#define NUM_OF_INPUTS 3


static void sortArrayDesc( int* arr, int length )
{
    int max_value_idx = 0;

    for( int i = 0; i < length-1; i++ )
    {
        max_value_idx = i;

        for( int j = i+1; j < length; j++ )
        {
            if( arr[j] >  arr[max_value_idx] )
                max_value_idx = j;
        }

        if( i != max_value_idx )
        {
            int swapper = arr[i];
            arr[i] = arr[max_value_idx];
            arr[max_value_idx] = swapper;
        }
    }
}


int main()
{
    int input[NUM_OF_INPUTS] = { 0 };
    bool isInputValid = true;

    for( int i = 0; i < NUM_OF_INPUTS && isInputValid; isInputValid &= (input[i] >= 0 && input[i] <= 9), i++ )
        std::cin >> input[i];

    if( isInputValid )
    {
        sortArrayDesc( input, NUM_OF_INPUTS );
        printf("The biggest possible number is %d\n", input[0]*100 + input[1]*10 +input[2] );
    }
    else
    {
        printf("Invalid input\n");
    }

    return EXIT_SUCCESS;
}
