#include "Kolo.h"
#include <iostream>
#include <cmath>

Kolo::Kolo(const std::string& n) : Figura(n), promien(0) {}

void Kolo::wczytaj() {
    std::cout << "Środek koła:\n";
    srodek.wczytaj();
    std::cout << "Podaj promień: ";
    std::cin >> promien;
}

void Kolo::wypisz() const {
    std::cout << "Koło " << nazwa << ": ";
    srodek.wypisz();
    std::cout << ", r = " << promien << "\n";
}

double Kolo::pole() const {
    return M_PI * promien * promien;
}

double Kolo::obwod() const {
    return 2 * M_PI * promien;
}
