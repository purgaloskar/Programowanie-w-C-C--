//Zad14 Oskar Purgal 24.03.2025r

#include <iostream>
#include <cmath>

int main() {
    double a = 10, b = 0;
    char operacja = '/';

    switch (operacja) {
        case '+': std::cout << a + b << "\n"; break;
        case '-': std::cout << a - b << "\n"; break;
        case '*': std::cout << a * b << "\n"; break;
        case '/':
            std::cout << (b != 0 ? a / b : NAN) << "\n";
            break;
        default:
            std::cout << "Nieznana operacja\n";
    }

    return 0;
}
