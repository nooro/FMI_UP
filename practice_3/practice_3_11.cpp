#include <iostream>

int main()
{
    int input[5] = { 0 };

    for( int i = 0; i < 5; i++ )
        std::cin >> input[i];

    bool isInA = (input[4] >= input[0]) && (input[4] <= input[1]);
    bool isInB = (input[4] >= input[2]) && (input[4] <= input[3]);

    bool isInAandB   = isInA && isInB;
    bool isInAorB    = isInA || isInB;
    bool isInAminusB = isInA && !isInB;

    printf("%d is %s A ^ B\n", input[4], isInAandB   ? "in" : "not in");
    printf("%d is %s A v B\n", input[4], isInAorB    ? "in" : "not in");
    printf("%d is %s A - B\n", input[4], isInAminusB ? "in" : "not in");

    isInAandB ? printf("%d is element of both A and B\n", input[4] ) :
    isInAorB  ? printf("%d is element of only %c\n", input[4], isInAminusB ? 'A':'B') :
                printf("%d is not an element of A nor B\n", input[4]);


    return EXIT_SUCCESS;
}
