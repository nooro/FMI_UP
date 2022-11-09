#include <iostream>


int main()
{
    double input_a = 0, input_b = 0;

    std::cin >> input_a >> input_b;

    const double results[6] =
    {
        (double)(input_a + input_b),
        (double)(input_a - input_b),
        (double)(input_b - input_a),
        (double)(input_a * input_b),
        (double)(input_a / input_b),
        (double)(input_b / input_a)
    };

    double biggest = results[0];

    for( double result : results )
    {
        if( result > biggest )
            biggest = result;
    }

    std::cout << biggest << std::endl;

    return EXIT_SUCCESS;
}
