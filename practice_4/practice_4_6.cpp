#include <iostream>


int main()
{
    long long  int a = 0, b = 0, c = 0, d = 0, e = 0;

    std::cin >> a >> b >> c >> d >> e;

    for( int x = -100; x <= 100; x++ )
    {
        long long int polinome = (a * (x*x*x*x)) + (b * (x*x*x)) + (c * (x*x)) + (d*x) + e;

        if( polinome >= 0 )
            printf("%d ", x);
    }

	printf("\n");

    return EXIT_SUCCESS;
}
