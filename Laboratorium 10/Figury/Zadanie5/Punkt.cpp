#include "Punkt.h"
#include <iostream>

Punkt::Punkt() : x(0), y(0), nazwa("") {}
Punkt::Punkt(double x, double y, const std::string& nazwa)
    : x(x), y(y), nazwa(nazwa) {}

void Punkt::wczytaj() {
    std::cout << "Podaj nazwę punktu: ";
    std::cin >> nazwa;
    std::cout << "Podaj x i y: ";
    std::cin >> x >> y;
}

void Punkt::wypisz() const {
    std::cout << nazwa << ": (" << x << ", " << y << ")";
}

double Punkt::getX() const { return x; }
double Punkt::getY() const { return y; }

