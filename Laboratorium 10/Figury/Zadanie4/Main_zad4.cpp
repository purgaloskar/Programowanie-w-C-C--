#include <iostream>
#include "Trojkat.h"

int main() {
    Trojkat t("T1");
    t.ustawNazwe("NowaNazwa");
    t.wczytaj();
    t.wypisz();
    std::cout << "Pole: " << t.pole() << ", Obwód: " << t.obwod() << "\n";
    return 0;
}

