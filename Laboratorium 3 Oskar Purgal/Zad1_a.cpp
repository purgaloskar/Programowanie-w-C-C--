//Zad1a Oskar Purgal 24.03.2025r
#include <iostream>
#include <string>

int main() {
    std::string input;
    int liczbaJedynki = 0, liczbaBlednych = 0;
    char znak;

    std::cout << "Wprowadź ciąg zer i jedynek (naciśnij Enter, aby zakończyć): ";

    while (true) {
        znak = std::cin.get();

        if (znak == '\n') {
            break;
        }

        if (znak == '1') {
            liczbaJedynki++;
        } else if (znak == '0') {
        } else {
            liczbaBlednych++;
        }
    }

    int wynikXOR = liczbaJedynki % 2;

    std::cout << "Wynik XOR: " << wynikXOR << "\n";
    std::cout << "Ilość wprowadzonych jedynek: " << liczbaJedynki << "\n";
    std::cout << "Ilość błędnych znaków: " << liczbaBlednych << "\n";

    return 0;
}
