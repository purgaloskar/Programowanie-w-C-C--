#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta, x1, x2;
    cout << "Podaj a, b, c: ";
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "x = " << x1 << endl;
    } else {
        cout << "Brak rozwiązań w liczbach rzeczywistych" << endl;
    }
    return 0;
}

