#include <iostream>

//There is used a greedy algorithm

void printBank(int i, int i1);

void coinExchange ()
{
    int banknotes[8] = {5000, 1000, 500, 50, 10, 5, 2, 1 };
    int money;

    std::cout << "\nEnter the amount of money:\n";
    std::cin >> money;

    for (int b : banknotes)
    {
        int amount = money / b;
        money -= amount * b;
        printBank(amount, b);
    }
}

void printBank(int amount, int banknote)
{
    std::cout << "*** " << amount << " of " << banknote << std::endl;
}
