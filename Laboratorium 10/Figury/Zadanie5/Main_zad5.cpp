#include <iostream>
#include <vector>
#include "Prostokat.h"
#include "Kolo.h"
#include "Trojkat.h"

int main() {
    std::vector<Figura*> figury;

    Prostokat* p = new Prostokat("P1");
    p->wczytaj();
    figury.push_back(p);

    Kolo* k = new Kolo("K1");
    k->wczytaj();
    figury.push_back(k);

    Trojkat* t = new Trojkat("T1");
    t->wczytaj();
    figury.push_back(t);

    std::cout << "\n-- Wywołania polimorficzne --\n";
    for (Figura* f : figury) {
        f->wypisz();
        std::cout << "Pole: " << f->pole() << ", Obwód: " << f->obwod() << "\n\n";
    }

    for (Figura* f : figury)
        delete f;

    return 0;
}
