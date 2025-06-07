#include "Pozycja.h"

Pozycja::Pozycja(const std::string& nrKat, const std::string& isbn, const std::string& a,
                 const std::string& tyt, const std::string& wyd, const std::string& data,
                 bool rez, bool wyp)
    : numerKatalogowy(nrKat), numerISBN(isbn), autor(a), tytul(tyt),
      wydawnictwo(wyd), dataWydania(data), zarezerwowana(rez), wypozyczona(wyp) {}

const std::string& Pozycja::getNumerKatalogowy() const { return numerKatalogowy; }
const std::string& Pozycja::getISBN() const { return numerISBN; }
const std::string& Pozycja::getTytul() const { return tytul; }
bool Pozycja::isZarezerwowana() const { return zarezerwowana; }
bool Pozycja::isWypozyczona() const { return wypozyczona; }

void Pozycja::zarezerwuj() { zarezerwowana = true; }
void Pozycja::wypozycz() { wypozyczona = true; }
void Pozycja::oddaj() {
    zarezerwowana = false;
    wypozyczona = false;
}
