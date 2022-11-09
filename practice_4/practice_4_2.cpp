#include <iostream>


int main()
{
    int first_num  = 0;
    int second_num = 0;
    
    std::cin >> first_num;
    std::cin >> second_num;

    int smaller_num = first_num > second_num ? second_num : first_num;

    for( int i = smaller_num; i > 0; i-- )
    {
        if( (first_num%i == 0) && (second_num%i == 0) )
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
