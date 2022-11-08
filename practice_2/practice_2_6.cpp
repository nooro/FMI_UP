#include <iostream>


#define INPUT_NUMBERS 5


int main()
{
    int input[INPUT_NUMBERS] = { 0 };
    bool isSaw = true;

    for( int i = 0; i < INPUT_NUMBERS; i++ )
        std::cin >> input[i];

    for( int i = 1; i < INPUT_NUMBERS - 1 && isSaw; i++ )
        isSaw = ( (input[i]>=input[i-1] && input[i]>=input[i+1]) || (input[i]<=input[i-1] && input[i]<=input[i+1]) );

     std::cout << (isSaw ? "Yes" : "No") << std::endl;

    return EXIT_SUCCESS;
}
