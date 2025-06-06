#include <iostream>
using namespace std;

string Bit_stat(unsigned short x, unsigned int n) {
    unsigned short mask = 1 << n;
    if ((x & mask) > 0 == 0)
        return "Off";
    if ((x & mask) > 0 == 1)
        return "On";
}
void PrintBin(unsigned short X) {
    for (int i = sizeof(unsigned short) * 8 - 1; i >= 0; i--) {
        cout << (X >> i & 1);
    }
    cout << endl;
}
int main()
{
    unsigned short x;
    cin >> x;
    unsigned short n = 4;
    cout << "Bit status: " << Bit_stat(x, n);
    PrintBin(x);
}