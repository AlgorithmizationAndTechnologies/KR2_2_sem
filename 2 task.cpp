#include <iostream>
#include <cmath>
#include "1 task Area.h"

using namespace std;

int main() {
    double x;
    double e;
    cout << "Enter x" << endl;
    cin >> x;
    if (Chek_enter() == false || abs(x) >= 1) { return 0; }
    cout << "Enter eps" << endl;
    cin >> e;
    if (e <= 0 || e >= 1|| Chek_enter() == false) { return 0; }

    double curr = x;
    double _sum = curr;
    for (int n = 2; abs(curr) > e; n++) {
        curr = pow(-1, n-1) * pow(x, n) / n;
        _sum += curr;
    }
    
    cout << _sum << endl;
    return 0;
}
