//Zad3 Oskar Purgal 24.03.2025r

#include <iostream>

int main() {
    double a, b;
    std::cout << "Podaj a i b: ";
    std::cin >> a >> b;

    if (a != 0)
        std::cout << "Miejsce zerowe: " << -b / a << "\n";
    else
        std::cout << (b == 0 ? "Nieskończenie wiele rozwiązań.\n" : "Brak rozwiązań.\n");

    return 0;
}
