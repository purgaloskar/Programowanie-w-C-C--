#include "Multimedia.h"
#include <iostream>

Multimedia::Multimedia(const std::string& nrKat, const std::string& isbn, const std::string& a,
                       const std::string& tyt, const std::string& wyd, const std::string& data,
                       bool rez, bool wyp)
    : Pozycja(nrKat, isbn, a, tyt, wyd, data, rez, wyp) {}

void Multimedia::wypisz() const {
    std::cout << "Multimedia: " << tytul << " | Autor: " << autor
              << " | ISBN: " << numerISBN << " | Wydawnictwo: " << wydawnictwo
              << " | Wydano: " << dataWydania
              << " | Zarezerwowana: " << (zarezerwowana ? "TAK" : "NIE")
              << " | Wypozyczona: " << (wypozyczona ? "TAK" : "NIE") << std::endl;
}

std::string Multimedia::getTyp() const {
    return "Multimedia";
}
