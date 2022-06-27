#include <cstdlib>
#include <iostream>
#include <cmath>

void gaussFormula ()
{
    double S;
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

    std::cout << "\nEnter the coordinates:\n";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;

    S = 0.5 * fabs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);
    std::cout << "\nS = " << S << std::endl;
}