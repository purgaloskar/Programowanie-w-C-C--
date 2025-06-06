#include "statistics_module.hpp"
#include <fstream>

void zapiszStatystyki(const std::string& plik, const std::string& imie, const std::string& nazwisko,
                      int czas, int ilosc_slowek, double srednia_proby) {
    std::ofstream out(plik, std::ios::app);
    out << imie << " " << nazwisko << " "
        << "Czas: " << czas << "s "
        << "Słówka: " << ilosc_slowek << " "
        << "Średnia prób: " << srednia_proby << "\n";
}

