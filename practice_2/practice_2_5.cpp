#include <iostream>


int main()
{
    int hh = 0;
    int mm = 0;

    std::cin >> hh >> mm;
	
    if( (hh >= 0 && hh <= 23) && (mm >= 0 && mm <= 59) )
    {
        mm += 15;

        if( mm > 59 )
        {
            mm -= 60;
            hh++;
        }

        if( hh > 23 )
            hh -= 24;

        printf( "%02d:%02d\n", hh, mm );
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }

    return EXIT_SUCCESS;
}
