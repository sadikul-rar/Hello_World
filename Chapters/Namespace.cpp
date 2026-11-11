#include <iostream>

namespace first 
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()

{

    int x = 0;

    std::cout << second::x << std::endl; //use different values for a single variable using namespace. in this case the answer will be 2.

    return 0;

}