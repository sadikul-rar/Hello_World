#include <iostream>

int main()

{

    const double PI = 3.1415926536; //const means constant of whichever variable we do not want changed. Always name constants in capital letters.
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference  << "cm" << std::endl;

    return 0;

}