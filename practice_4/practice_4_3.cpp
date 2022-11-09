#include <iostream>


int main()
{
    int input = 0;
    int digits = 1;
    int delimeter = 10;
    int remainder = 0;
    int output = 0;

    std::cin >> input;

    while( input / delimeter > 0 )
    {
        digits++;
        delimeter *= 10;
    }

    if( digits >= 3 )
    {
        delimeter = 1;
        
        if( digits % 2 != 0 )
        {
            for( int i = 0; i < digits/2; i++ )
            {
                remainder += (input % 10) * delimeter;
                delimeter *= 10;
                input /= 10;
            }

            input /= 10;

            output = input * delimeter + remainder;
        }
        else
        {
            for( int i = 0; i < digits/2 - 1; i++ )
            {
                remainder += (input % 10) * delimeter;
                delimeter *= 10;
                input /= 10;
            }

            input /= 100;
            output = input * delimeter + remainder;
        }
    }
    else
    {
        output = input;
    }

    printf("%d, %d\n", output, output+1);
    
    return EXIT_SUCCESS;
}
