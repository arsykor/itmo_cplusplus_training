#include <iostream>

void maxNum ()
{
    int num1, num2, num3;
    std::cout << "\nEnter 3 numbers:\n";
    std::cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
        std::cout << "The largest is: " << num1 << std::endl;
    else if (num2 >= num3)
        std::cout << "The largest is: " << num2 << std::endl;
    else
        std::cout << "The largest is: " << num3 << std::endl;
}