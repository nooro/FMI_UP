#include <iostream>


#define VOWELS_NUM 6


static const char vowels[VOWELS_NUM] = {'A', 'E', 'I', 'O', 'U', 'Y' };
static const int  small_big_letters_ascii_code_difference = 'a' - 'A';


static bool isVowel( char in_char )
{
    bool is_vowel = false;

    for( char vowel : vowels )
    {
        if( (in_char == vowel) || (in_char == vowel+small_big_letters_ascii_code_difference) )
        {
            is_vowel = true;
            break;
        }
    }

    return is_vowel;
}


int main()
{
    char input = 0;
    std::cin.read( &input, 1 );

    std::cout << input << (true==isVowel(input) ? " is" : " is not") << " a vowel" << std::endl;

    return EXIT_SUCCESS;
}
