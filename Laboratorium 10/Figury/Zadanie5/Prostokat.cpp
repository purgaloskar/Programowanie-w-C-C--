#include "Prostokat.h"
#include <iostream>
#include <cmath>

Prostokat::Prostokat(const std::string& n) : Figura(n) {}

void Prostokat::wczytaj() {
    std::cout << "Punkty prostokąta:\n";
    a.wczytaj();
    b.wczytaj();
}

void Prostokat::wypisz() const {
    std::cout << "Prostokąt " << nazwa << ": ";
    a.wypisz(); std::cout << " - "; b.wypisz(); std::cout << "\n";
}

double Prostokat::pole() const {
    return std::abs((b.getX() - a.getX()) * (b.getY() - a.getY()));
}

double Prostokat::obwod() const {
    return 2 * (std::abs(b.getX() - a.getX()) + std::abs(b.getY() - a.getY()));
}

