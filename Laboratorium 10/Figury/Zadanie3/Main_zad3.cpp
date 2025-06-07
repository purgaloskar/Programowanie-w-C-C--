#include <iostream>
#include <vector>
#include "Prostokat.h"
#include "Kolo.h"

int main() {
    std::vector<Figura*> figury;

    Prostokat* p1 = new Prostokat("P1");
    p1->wczytaj();
    figury.push_back(p1);

    Prostokat* p2 = new Prostokat("P2");
    p2->wczytaj();
    figury.push_back(p2);

    Kolo* k1 = new Kolo("K1");
    k1->wczytaj();
    figury.push_back(k1);

    Kolo* k2 = new Kolo("K2");
    k2->wczytaj();
    figury.push_back(k2);

    std::cout << "\n--- Wszystkie figury ---\n";
    for (Figura* f : figury) {
        f->wypisz();
        std::cout << "Pole: " << f->pole() << ", Obwód: " << f->obwod() << "\n\n";
    }

    for (Figura* f : figury)
        delete f;

    return 0;
}

