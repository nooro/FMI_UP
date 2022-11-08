#include <iostream>


#define PI (double)3.14159265358979323846


int main()
{
    std::string figure_type = "";
    std::cin >> figure_type;

    double area = 0.0;

    if( figure_type == "c" || figure_type == "circle" )
    {
        double input_radius = 0.0;
        std::cin >> input_radius;

        area = PI * input_radius * input_radius;
    }
    else if( figure_type == "s" || figure_type == "square" )
    {
        double input_side = 0.0;
        std::cin >> input_side;

        area = input_side * input_side;
    }
    else if( figure_type == "r" || figure_type == "rectangle" )
    {
        double input_side_a = 0.0;
        double input_side_b = 0.0;
        std::cin >> input_side_a >> input_side_b;

        area = input_side_a * input_side_b;
    }
    else if( figure_type == "t" || figure_type == "triangle" )
    {
        double input_side = 0.0;
        double input_height = 0.0;
        std::cin >> input_side >> input_height;

        area = (input_side * input_height) / 2;
    }
    else
    {
        std::cout << "Invalid figure" << std::endl;
    }

    if( area != 0.0 )
        printf( "Area: %.3f\n", area );

    return EXIT_SUCCESS;
}
