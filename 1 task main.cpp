#include <iostream>
#include "1 task Area.h"
#include "1, 2 task Tests.cpp"
#include <cmath>
using namespace  std;
int main()
{
    cout << "Runing tests..." << endl;
    Test();
    cout << "All tests succsessfull" << endl << endl;
    double a;
    int n;
    cout << "Enter radius" << endl;
    cin >> a;
    if (Chek_enter() == false || a < 0) { return 0; }
    cout << "Enter quality of angle 3 to 5" << endl; 
    cin >> n;
    if (Chek_enter() == false && n != 3 && n != 4 && n != 5 || n < 0) { return 0;}
    int choice;
    while (true)
    {
        cout << "\nMeny\n";
        cout << "1. Find the radius of the inscribed circle\n";
        cout << "2. Find the radius of the circumscribed circle\n";
        cout << "3. Find the area of polygon\n";
        cout << "4. Help\n";
        cout << "5. Leave\n";
        cin >> choice;

        if (choice == 1)
        {
            std::cout << endl << Radius_inside_figure(n, a) << endl;
        }
        else if (choice == 2)
        {
            std::cout << endl << Radius_outside_figure(n, a) << '\t' << 2*sin((3.14*180.0/n)/180.0) << endl;
        }
        else if (choice == 3)
        {
            std::cout << endl << Area_figure(n, a) << endl;
        }
        else if (choice == 4) {
            _help();
        }
        else if (choice == 5)
            return 0;
        else {
            std::cout << endl << "This choice doesn't exist" << endl;
            break;
        }
    }
}
