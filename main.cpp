#include <iostream>
#include "MainHeader.h"

void composite(int number, int number1);

void writeExercises();

int main()
{
    int labNumber;
    int exNumber;

    writeExercises();

    std::cin >> labNumber;
    std::cin >> exNumber;
    std::cout << "<<< Lab № " << labNumber << "; exercise " << exNumber << ">>>" << std::endl;

    composite(labNumber, exNumber);
}

void writeExercises() {
    std::cout << "___Chose:\n";
    std::cout << "Lab 1.\n";
    std::cout << "*** 1. The area of a rectangle\n";
    std::cout << "Lab 2.\n";
    std::cout << "*** 1. Leap year\n";
    std::cout << "*** 2. The largest of the three numbers\n";
    std::cout << "*** 3. Coin exchange - using a greedy algorithm\n";
    std::cout << "*** 4. Playing darts\n";
    std::cout << "---------------------------------------------------\n";
}

void composite(int labNumber, int exNumber)
{
    switch (labNumber) {
        case 1:
            switch (exNumber) {
                case 1:
                    gaussFormula();
            }
        case 2:
            switch (exNumber) {
                case 1:
                    leapYear();
                case 2:
                    maxNum();
                case 3:
                    coinExchange();
                case 4:
                    darts();
            }
    }
}

