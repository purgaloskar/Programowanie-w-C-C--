#include "Prostokat.h"
#include <iostream>
#include <cmath>

Prostokat::Prostokat() {
    std::cout << "To ja, konstruktor domyślny prostokąta\n";
}

Prostokat::Prostokat(Punkt p1, Punkt p2, const std::string& n)
    : a(p1), b(p2), nazwa(n) {
    std::cout << "To ja, konstruktor z parametrami prostokąta\n";
}

Prostokat::~Prostokat() {
    std::cout << "To ja, destruktor prostokąta\n";
}

void Prostokat::wczytaj() {
    std::cout << "Podaj nazwę prostokąta: ";
    std::cin >> nazwa;
    std::cout << "Podaj pierwszy punkt:\n";
    a.wczytaj();
    std::cout << "Podaj drugi punkt:\n";
    b.wczytaj();
}

void Prostokat::wypisz() const {
    std::cout << "Prostokąt " << nazwa << ": ";
    a.wypisz();
    std::cout << " - ";
    b.wypisz();
    std::cout << "\n";
}

double Prostokat::pole() const {
    return std::abs((b.getX() - a.getX()) * (b.getY() - a.getY()));
}

double Prostokat::obwod() const {
    return 2 * (std::abs(b.getX() - a.getX()) + std::abs(b.getY() - a.getY()));
}

