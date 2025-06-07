#include "Trojkat.h"
#include <iostream>
#include <cmath>

Trojkat::Trojkat(const std::string& n) : Figura(n) {}

void Trojkat::wczytaj() {
    std::cout << "3 punkty trójkąta:\n";
    a.wczytaj(); b.wczytaj(); c.wczytaj();
}

void Trojkat::wypisz() const {
    std::cout << "Trójkąt " << nazwa << ": ";
    a.wypisz(); std::cout << ", ";
    b.wypisz(); std::cout << ", ";
    c.wypisz(); std::cout << "\n";
}

double Trojkat::pole() const {
    return 0.5 * std::abs(
        a.getX() * (b.getY() - c.getY()) +
        b.getX() * (c.getY() - a.getY()) +
        c.getX() * (a.getY() - b.getY())
    );
}

double Trojkat::obwod() const {
    auto d = [](Punkt p1, Punkt p2) {
        return std::sqrt(
            std::pow(p1.getX() - p2.getX(), 2) +
            std::pow(p1.getY() - p2.getY(), 2));
    };
    return d(a, b) + d(b, c) + d(c, a);
}
