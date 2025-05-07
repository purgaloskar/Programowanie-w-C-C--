#include <iostream>
using namespace std;

int main() {
    double a, b, x;
    cout << "Podaj a i b: ";
    cin >> a >> b;
    if (a != 0) {
        x = -b / a;
        cout << "Rozwiązanie: x = " << x << endl;
    } else {
        cout << "Brak rozwiązania lub nieskończenie wiele" << endl;
    }
    return 0;
}
