//Zad4 Oskar Purgal 24.03.2025r

#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Podaj a, b, c: ";
    std::cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "Pierwiastki: " << x1 << " i " << x2 << "\n";
    } else if (delta == 0) {
        std::cout << "Pierwiastek: " << -b / (2 * a) << "\n";
    } else {
        std::cout << "Brak rozwiązań.\n";
    }

    return 0;
}
