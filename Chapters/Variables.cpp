#include <iostream>

int main()

{
    int x;         //declaration (Basically it means x is an integer, meaning whole number)
    x = 5;         //Assignment (assigning x as 5)
    std::cout << x; //meaning standard character output of x which the compiler show as 5 because we told the compiler that x = 5 (Do not forget the double colon)

    return 0;
}

//also

#include <iostream>

int main()

{
    int x = 5;
    int y = 6;
    std::cout << x << std::endl; // you can also write "std::cout << x << y << std::endl" to get the result 56
    std::cout << y << std::endl; // But in this case you'll get 5 and in the next line, 6

    return 0;
}


// Sum

#include <iostream>

int main()

{
    int x = 5;
    int y = 6;
    int sum = 2 * x + y;

    std::cout << sum << std::endl; // You'll get the answer 5611 because sum means the mathing, sum is the mathematical formula.

    return 0;
}


// Languase equals number 

#include <iostream>

int main()

{

    // int to show integers or numbers
    int day = 18;
    int month = 10;
    int year = 2003;
    int sum = day + 2 * month + year;

    // Double to show decimals
    double price = 10.99;

    // Single character
    char grade = 'A';
    char dollarsign = '$';
    
    //Booleans (True or false)
    bool student = true;
    bool power = false;
    bool sale = true;

    //string (Sequence of text)
    std::string name = "captain";
    std::string food = "pizza";
    std::string address = "308 Negra Arroyo Lane, Albuquerque, New Mexico";

    const double Lightspeed = 299792458; //const means constant, you cannot change the value of constant. Always keep it capital letters.

    std::cout << sum << std::endl; // You'll get the answer 2031 because sum means the mathing, sum is the mathematical formula.

    return 0;
}