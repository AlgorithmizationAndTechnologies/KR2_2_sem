#include "1 task Area.h";
#include <iostream>
#include <cmath>
double Radius_inside_figure(int n, double a)
{
    return a / (2 * tan(180.0 / n));
}
double Radius_outside_figure(int n, double a)
{
    return a / (2 * sin((3.14 * 180.0 / n) / 180.0));
}
double Area_figure(int n, double a)
{
    return (a * a * n) / (4 * tan((3.14 * 180.0 / n) / 180.0));
}
bool Chek_enter()
{
    if (std::cin.fail()) {
        std::cout << "Not a number entered";
        return false;
    }
    return true;
}
void _help() {
    std::cout <<
        "1. Find radius inside figure: a / (2 * tan(180.0 / n))\n" <<
        "2. Find radius outside figure: a / (2 * sin((3.14 * 180.0 / n) / 180.0))\n" <<
        "3. Find area figure: (a * a * n) / (4 * tan((3.14 * 180.0 / n) / 180.0))\n";
}
