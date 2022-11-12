#include <iostream>


#define CARDS      2
#define ACE        1
#define KING       13
#define BLACK_JACK 21


int main()
{
    int cards[CARDS] = { 0 };
    bool isInputValid = true;
    int numOfAces = 0;

    for( int i = 0; i < CARDS; i++ )
    {
        std::cin >> cards[i];

        isInputValid &= ((cards[i] >= ACE) && (cards[i] <= KING));

        if( isInputValid )
        {
            if( cards[i] == ACE )
                numOfAces++;

            if( cards[i] > 10 )
                cards[i] = 10;
        }
    }

    if( isInputValid )
    {
        int sum = cards[0]+cards[1];
        bool isBlackJack = (sum == BLACK_JACK) || (sum == BLACK_JACK - numOfAces*10);

        printf( "%d+%d %s Black Jack\n", cards[0], cards[1], isBlackJack ? "IS" : "IS NOT" );
    }
    else
    {
        printf("Invalid input\n");
    }


    return EXIT_SUCCESS;
}
