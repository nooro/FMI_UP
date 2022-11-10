#include <iostream>


static const std::string digits[10] = { "zero", "one", "two",   "three", "four",
                                        "five", "six", "seven", "eight", "nine" };

static const std::string tenths[8] = { "twenty", "thirty",  "forty",  "fifty",
                                       "sixty",  "seventy", "eighty", "ninety" };

static const std::string teens[10] = { "ten", "eleven", "twelve", "thirteen", "fourteen",
                                  "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };


int main()
{
    int input_number = 0;
    std::cin >> input_number;

    if( (input_number < 0) || (input_number > 100) )
        printf("Invalid input\n");

    else if( input_number == 0 )    printf("%s\n", digits[input_number].c_str() );
    else if( input_number == 100 )  printf("One hundred\n");
    else if( input_number <= 9 )    printf("%s\n", digits[input_number].c_str() );
    else if( input_number/10 == 1 ) printf("%s\n", teens[input_number-10].c_str() );
    else if( input_number/10 > 1 )
    {
        printf("%s ", tenths[input_number/10-2].c_str() );
		
        if( input_number%10 > 0 )
            printf("%s", digits[input_number%10].c_str() );
        printf("\n");
    }

    return EXIT_SUCCESS;
}
