//Zad1b Oskar Purgal 24.03.2025r

#include <iostream>
#include <cmath>

int main() {
    double podstawa, wykladnik;

    std::cout << "Podaj podstawę: ";
    std::cin >> podstawa;

    std::cout << "Podaj wykładnik: ";
    std::cin >> wykladnik;

    double wynik;

    // Pętla for
    wynik = 1;
    for (int i = 0; i < std::abs(wykladnik); i++) {
        wynik *= podstawa;
    }
    if (wykladnik < 0) wynik = 1 / wynik;
    std::cout << "Wynik (for): " << wynik << "\n";

    // Pętla while
    wynik = 1;
    int i = 0;
    while (i < std::abs(wykladnik)) {
        wynik *= podstawa;
        i++;
    }
    if (wykladnik < 0) wynik = 1 / wynik;
    std::cout << "Wynik (while): " << wynik << "\n";

    // Pętla do..while
    wynik = 1;
    i = 0;
    do {
        wynik *= podstawa;
        i++;
    } while (i < std::abs(wykladnik));
    if (wykladnik < 0) wynik = 1 / wynik;
    std::cout << "Wynik (do..while): " << wynik << "\n";

    return 0;
}
