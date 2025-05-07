#include <iostream>
using namespace std;

int swap(int& a, int& b) {
    if (a == b) return 0;
    int temp = a;
    a = b;
    b = temp;
    if (a > b) return 1;
    return -1;
}

int main() {
    int x = 5, y = 3;
    cout << swap(x, y) << " " << x << " " << y << endl;
}

