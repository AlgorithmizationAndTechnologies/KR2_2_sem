#include <iostream>
using namespace std;

string Bit_stat(unsigned short x, unsigned int n) {
    unsigned short mask = 1 << n;
    if ((x & mask) == 0)
        return "Off";
    else
        return "On";
}
void Print_bin(unsigned short x) {
    for (int i = sizeof(unsigned short) * 8 - 1; i >= 0; i--) {
        cout << (x >> i & 1);
    }
    cout << endl;
}
int main()
{
    unsigned short x = 10;
    unsigned short n = 2;
    cout << "Bit status: " << Bit_stat(x, n) << endl;
    Print_bin(x);
}
