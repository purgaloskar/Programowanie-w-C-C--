#include <iostream>
using namespace std;

long int squareVal(long int x) {
    return x * x;
}

void squareRef(long int& x) {
    x = x * x;
}

int main() {
    long int a = 5;
    cout << squareVal(a) << endl;
    squareRef(a);
    cout << a << endl;
}

