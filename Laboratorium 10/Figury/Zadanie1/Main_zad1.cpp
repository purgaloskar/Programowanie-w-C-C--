#include <iostream>
#include <vector>
#include <string>
#include "Punkt.h"

int main() {
    std::vector<Punkt> punkty;
    std::string decyzja;

    while (true) {
        Punkt p;
        p.wczytaj();
        punkty.push_back(p);

        std::cout << "Czy chcesz dodać kolejny punkt? (tak/nie): ";
        std::cin >> decyzja;
        if (decyzja != "tak") break;
    }

    std::cout << "\nWprowadzone punkty:\n";
    for (const Punkt& p : punkty) {
        p.wypisz();
        std::cout << "\n";
    }

    return 0;
}

