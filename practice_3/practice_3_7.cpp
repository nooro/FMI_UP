/**************************** D I S C L A I M E R *****************************
   To be honest I wasn't sure how to determine if three given sides can form  *
   a triangle so I followed this article:                                     *
    https://www.wikihow.com/Determine-if-Three-Side-Lengths-Are-a-Triangle    *
*******************************************************************************/


/*********** T R I A N G L E   I N E Q U A L I T Y   T H E O R E M ************
   This theorem simply states that the sum of two sides of a triangle must be *
   greater than the third side. If this is true for all three combinations,   *
   then you will have a possible valid triangle. You'll have to go through    *
   these combinations one by one to make sure that the triangle is possible.  *
*******************************************************************************/

#include <iostream>

#define INPUT_NUMBERS 3


int main()
{
    double lengths[INPUT_NUMBERS] = { 0 };
    bool isValid = true;

    for( int i = 0; i < INPUT_NUMBERS; isValid &= lengths[i] > 0, i++ )
        std::cin >> lengths[i];


    isValid &= (lengths[0] + lengths[1] > lengths[2]) &&
               (lengths[0] + lengths[2] > lengths[1]) &&
               (lengths[1] + lengths[2] > lengths[0]);


    printf("%f,  %f,  %f  %s form a triangle.\n", lengths[0],
                                                  lengths[1],
                                                  lengths[2],
                                                  (isValid ? "CAN":"CAN NOT"));

    return EXIT_SUCCESS;
}
