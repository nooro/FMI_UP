#include <iostream>

int main()
{
    int input = 0, even_factor = 0, current_number = 0;
    
    std::cin >> input;

    if( input > 0 )
    {
        for( int i = 0; i < input; i++ )
        {
            for( int j = 0; j < input; j++ )
            {
                even_factor = i%2;
                current_number = ((i+even_factor)*input) + j+1 - 2*j*(even_factor) - even_factor;

                printf("%.2d ", current_number);
            }

            printf("\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
    }

    return EXIT_SUCCESS;
}
