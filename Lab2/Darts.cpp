#include <cstdlib>
#include <cmath>
#include <iostream>

int getRandom(int i, int i1);

void darts ()
{
    int points, x, y, hypotenuse, attempt;

    while (points < 50)
    {
        std::cout << "*** Attempt № " << attempt << std::endl;

        x = getRandom(-10,10);
        y = getRandom(-10,10);

        std::cout << "** x= " << x << std::endl;
        std::cout << "** y= " << y << std::endl << "\n";

        hypotenuse = hypot(x, y);

        if (hypotenuse > 10)
            points += 0;
        if (hypotenuse <= 10 && hypotenuse > 7)
            points += 2;
        if (hypotenuse <= 7 && hypotenuse > 4)
            points += 10;
        if (hypotenuse <= 7 && hypotenuse > 4)
            points += 15;
        if (hypotenuse <= 4 && hypotenuse > 1)
            points += 20;
        else
            points += 35;

        attempt++;
    }

    if (attempt <= 2)
        std::cout << "You are pro!" << std::endl;
    else if (attempt <= 5)
        std::cout << "You are good." << std::endl;
    else if (attempt <= 25)
        std::cout << "You are noob." << std::endl;
    else if (attempt <= 25)
        std::cout << "Try again later..." << std::endl;
}

int getRandom(int min, int max) {
    srand((unsigned int)time(NULL));
    return (min + rand() % max);
}
