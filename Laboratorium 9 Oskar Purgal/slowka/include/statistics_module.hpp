#ifndef STATISTICS_MODULE_HPP
#define STATISTICS_MODULE_HPP

#include <string>

void zapiszStatystyki(const std::string& plik, const std::string& imie, const std::string& nazwisko,
                      int czas, int ilosc_slowek, double srednia_proby);

#endif

