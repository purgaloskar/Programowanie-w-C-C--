#include <iostream>
using namespace std;

double f(double x) {
    return (x + 2) * x * x * (x + 4) - 2;
}

int main() {
    double a, b, minX, maxX, minY, maxY, y;
    cout << "Podaj zakres (a b): ";
    cin >> a >> b;
    minX = maxX = a;
    minY = maxY = f(a);
    for (double x = a; x <= b; x += 0.01) {
        y = f(x);
        if (y < minY) { minY = y; minX = x; }
        if (y > maxY) { maxY = y; maxX = x; }
    }
    cout << "Min: f(" << minX << ") = " << minY << endl;
    cout << "Max: f(" << maxX << ") = " << maxY << endl;
    return 0;
}
