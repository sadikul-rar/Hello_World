#include <iostream>

int main()

{
     //type conversion = converting a valuee of one data to another.
     //                  implicit = automatic
     //                  explicit = precede a value with new data type (int)

    double x = (int) 25.15; //just write the data type in brackets.
    char x = 100; //in this case, the answer would be D because from ASCII

    std::cout << x << std::endl;
    std::cout << (char) 100; //in this case the answer is still D because of implicit conversion
    
    int price = 20;
    int preprice = 25;
    double present = price / (double) preprice * 100; //if you use int for preprice sum, you wouldn't get decimnals and the answer will be 0, so use (double) only for one time to calculate.

    std::cout << present << "%" << std::endl;


    return 0;
}
