#include <iostream>


int main()
{
    int input = 0;
    std::cin >> input;

    bool isPower = false;

	if( input > 0 )
    {
        if( input == 1 )
        {
            isPower = true;
        }
        else
        {
            int power = 1;

            while( true )
            {
                if( power * 2 <= input )
                    power *= 2;
                else
                    break;
            }

            if( power == input  )
                isPower = true;
        }
    }

    printf("%s\n", isPower ? "True" : "False" );

    return EXIT_SUCCESS;
}
