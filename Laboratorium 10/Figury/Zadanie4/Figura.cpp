#include "Figura.h"

Figura::Figura(const std::string& n) : nazwa(n) {}

Figura::~Figura() {}

void Figura::ustawNazwe(const std::string& n) {
    nazwa = n;
}
