#include <iostream>


int main()
{
    int first_num = 0;
    int second_num = 0;

    std::cin >> first_num >> second_num;

    for( int i = first_num; i <= second_num; i++ )
    {

        bool isPrime = true;
        for( int delimeter = 2; delimeter < i; delimeter++ )
        {
            if( i % delimeter == 0 )
            {
                isPrime = false;
                break;
            }
        }

        if( isPrime )
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return EXIT_SUCCESS;
}
