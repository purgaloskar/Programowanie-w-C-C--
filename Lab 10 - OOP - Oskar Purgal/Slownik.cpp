#include "Slownik.h"
#include <iostream>

Slownik::Slownik(const std::string& nrKat, const std::string& isbn, const std::string& a,
                 const std::string& tyt, const std::string& wyd, const std::string& data,
                 bool rez, bool wyp)
    : Pozycja(nrKat, isbn, a, tyt, wyd, data, rez, wyp) {}

void Slownik::wypisz() const {
    std::cout << "Slownik: " << tytul << " | Autor: " << autor
              << " | ISBN: " << numerISBN << " | Wydawnictwo: " << wydawnictwo
              << " | Wydano: " << dataWydania
              << " | Zarezerwowana: " << (zarezerwowana ? "TAK" : "NIE")
              << " | Wypozyczona: " << (wypozyczona ? "TAK" : "NIE") << std::endl;
}

std::string Slownik::getTyp() const {
    return "Slownik";
}
