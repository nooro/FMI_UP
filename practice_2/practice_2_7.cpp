#include <iostream>


int main()
{
    float radius = 0, x = 0, y = 0;
    std::cin >> radius >> x >> y;

    if( radius >= 0 )
    {
        if( x < 0 ) { x *= -1; }
        if( y < 0 ) { y *= -1; }

        if( (x > radius) || (y > radius) )
            std::cout << "Out of the circle" << std::endl;

        else if( (x == radius) || (y == radius) )
            std::cout << "On the circle" << std::endl;

        else
            std::cout << "In the circle" << std::endl;
    }
    else
    {
        std::cout << "Invalid radius" << std::endl;
    }

    return EXIT_SUCCESS;
}
