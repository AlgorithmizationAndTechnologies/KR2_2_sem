#include <iostream>
#include <cmath>
#include "1 task Area.h"

using namespace std;
int main() {
    double x;
    double e;
    cout << "Enter x" << endl;
    cin >> x;
    if (Chek_enter() == false || abs(x) < 1) { return 0; }
    cout << "Enter eps" << endl;
    cin >> e;
    if (abs(e) > 1 || Chek_enter() == false){return 0;}

    double _sum = 0;
    double curr = x;
    for (int i = 2; abs(curr) < e; i++) {
        curr = (-1) * x * (i - 1) / i;
        _sum += curr;
    }
    cout << _sum << endl;
    return 0;
}

