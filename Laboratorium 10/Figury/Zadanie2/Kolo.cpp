#include "Kolo.h"
#include <iostream>
#include <cmath>

Kolo::Kolo() : promien(0) {
    std::cout << "To ja, konstruktor domyślny koła\n";
}

Kolo::Kolo(Punkt s, double r, const std::string& n)
    : srodek(s), promien(r), nazwa(n) {
    std::cout << "To ja, konstruktor z parametrami koła\n";
}

Kolo::~Kolo() {
    std::cout << "To ja, destruktor koła\n";
}

void Kolo::wczytaj() {
    std::cout << "Podaj nazwę koła: ";
    std::cin >> nazwa;
    std::cout << "Podaj środek:\n";
    srodek.wczytaj();
    std::cout << "Podaj promień: ";
    std::cin >> promien;
}

void Kolo::wypisz() const {
    std::cout << "Koło " << nazwa << ": środek ";
    srodek.wypisz();
    std::cout << ", promień: " << promien << "\n";
}

double Kolo::pole() const {
    return M_PI * promien * promien;
}

double Kolo::obwod() const {
    return 2 * M_PI * promien;
}

