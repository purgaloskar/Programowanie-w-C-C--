#include "Czasopismo.h"
#include <iostream>

Czasopismo::Czasopismo(const std::string& nrKat, const std::string& isbn, const std::string& a,
                       const std::string& tyt, const std::string& wyd, const std::string& data,
                       bool rez, bool wyp)
    : Pozycja(nrKat, isbn, a, tyt, wyd, data, rez, wyp) {}

void Czasopismo::wypisz() const {
    std::cout << "Czasopismo: " << tytul << " | Autor: " << autor
              << " | ISBN: " << numerISBN << " | Wydawnictwo: " << wydawnictwo
              << " | Wydano: " << dataWydania
              << " | Zarezerwowana: " << (zarezerwowana ? "TAK" : "NIE")
              << " | Wypozyczona: " << (wypozyczona ? "TAK" : "NIE") << std::endl;
}

std::string Czasopismo::getTyp() const {
    return "Czasopismo";
}
