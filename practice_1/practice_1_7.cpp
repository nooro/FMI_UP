#include <iostream>

#define VALID_NOMINALS 7
static const int banknotes[VALID_NOMINALS] = { 100, 50, 20, 10, 5, 2, 1 };

int main()
{
    int money = 0, nominal = 0, num_of_banknotes = 0;
    std::cin >> money;

    while( money > 0 )
    {
        if( (money-banknotes[nominal]) >= 0 )
        {
            money -= banknotes[nominal];
            num_of_banknotes++;
        }
        else
        {
            if( num_of_banknotes > 0 )
                std::cout << num_of_banknotes << "x" << banknotes[nominal] << std::endl;

            nominal = ((nominal<=VALID_NOMINALS) ? nominal+1 : nominal);
            num_of_banknotes = 0;
        }
    }

    if( num_of_banknotes > 0 )
        std::cout << num_of_banknotes << "x" << banknotes[nominal] << std::endl;

    return EXIT_SUCCESS;
}
