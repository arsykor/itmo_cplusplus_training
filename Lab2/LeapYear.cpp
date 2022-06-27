#include <iostream>

void leapYear ()
{
    int year;

    std::cout << "\nEnter the year:\n";
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}