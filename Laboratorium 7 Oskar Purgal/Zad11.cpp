#include <iostream>
#include <cstdarg>
using namespace std;

void analiza(int n, ...) {
    va_list args;
    va_start(args, n);
    int licznik = 0, suma = 0, iloczyn = 1, min = 1000000, max = -1000000, x;
    while ((x = va_arg(args, int)) != 0) {
        licznik++;
        suma += x;
        iloczyn *= x;
        if (x < min) min = x;
        if (x > max) max = x;
    }
    va_end(args);
    cout << licznik << " " << suma << " " << iloczyn << " " << min << " " << max << endl;
}

int main() {
    analiza(0, 3, 5, 1, 7, 0);
}

