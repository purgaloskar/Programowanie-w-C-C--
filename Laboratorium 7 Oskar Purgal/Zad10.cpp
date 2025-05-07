#include <iostream>
using namespace std;

enum Maski { BIT0=1, BIT1=2, BIT2=4, BIT3=8, BIT4=16, BIT5=32, BIT6=64, BIT7=128 };

int ustawBit(int& slowo, int bit, bool ustaw) {
    if (slowo < 0) return -1;
    if (slowo > 255) return -2;
    if (bit < 0 || bit > 7) return -3;
    if (ustaw) slowo |= (1 << bit);
    else slowo &= ~(1 << bit);
    return 0;
}

void dec2bin(int x) {
    for (int i = 7; i >= 0; i--) cout << ((x >> i) & 1);
    cout << endl;
}

int main() {
    int x = 5;
    ustawBit(x, 2, true);
    dec2bin(x);
}

