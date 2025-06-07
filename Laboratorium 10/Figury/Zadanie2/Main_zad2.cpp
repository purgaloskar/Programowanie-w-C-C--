#include <iostream>
#include "Prostokat.h"
#include "Kolo.h"

int main() {
    Prostokat p;
    p.wczytaj();
    p.wypisz();
    std::cout << "Pole: " << p.pole() << ", Obwód: " << p.obwod() << "\n";

    std::cout << "\n";

    Kolo k;
    k.wczytaj();
    k.wypisz();
    std::cout << "Pole: " << k.pole() << ", Obwód: " << k.obwod() << "\n";

    return 0;
}

