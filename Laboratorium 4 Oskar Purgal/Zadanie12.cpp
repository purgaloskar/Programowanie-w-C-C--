#include <iostream>
using namespace std;

enum Maski { BIT_0 = 1, BIT_1 = 2, BIT_2 = 4, BIT_3 = 8, BIT_4 = 16, BIT_5 = 32, BIT_6 = 64, BIT_7 = 128 };

int main() {
    int liczba, bit;
    cin >> liczba >> bit;
    cout << ((liczba & (1 << bit)) ? "TAK" : "NIE") << endl;
    return 0;
}
