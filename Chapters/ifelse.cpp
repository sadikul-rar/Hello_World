
#include <iostream>

int main()
{
    int alice = 5;
    int bob = 5;
    int susan = 5;

    char decision;

    std::cout << "Should Susan leave? (y/n): " << std::endl;
    std::cin >> decision;

    if (decision == 'y')
    {
        int total = alice + bob;

        std::cout << "Susan has been kicked out!" << std::endl;
        std::cout << "Total money: £" << total << std::endl;
    }
    else
    {
        int total = alice + bob + susan;

        std::cout << "Susan stays!" << std::endl;
        std::cout << "Total money: £" << total << std::endl;
    }

    return 0;
}
