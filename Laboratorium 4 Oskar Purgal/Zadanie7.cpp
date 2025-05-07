#include <iostream>
#include <bitset>
using namespace std;

void show(char x) { cout << (int)x << " -> " << bitset<8>(x) << endl; }

int main() {
    char c = 126;
    show(c >> 1);
    show(c << 1);
    show(c << 3);
    return 0;
}
