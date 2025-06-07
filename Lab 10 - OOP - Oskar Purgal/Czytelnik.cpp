#include "Czytelnik.h"
#include <iostream>
#include <algorithm>

Czytelnik::Czytelnik(const std::string& p, const std::string& i, const std::string& n, const std::string& t)
    : pesel(p), imie(i), nazwisko(n), telefon(t) {}

const std::string& Czytelnik::getPesel() const { return pesel; }
const std::string& Czytelnik::getImie() const { return imie; }
const std::string& Czytelnik::getNazwisko() const { return nazwisko; }

void Czytelnik::wypozycz(std::shared_ptr<Pozycja> p) {
    if (wypozyczone.size() >= 5) throw std::runtime_error("Limit wypozyczen przekroczony");
    wypozyczone.push_back(p);
    p->wypozycz();
}

void Czytelnik::zarezerwuj(std::shared_ptr<Pozycja> p) {
    if (zarezerwowane.size() >= 3) throw std::runtime_error("Limit rezerwacji przekroczony");
    zarezerwowane.push_back(p);
    p->zarezerwuj();
}

void Czytelnik::oddaj(std::shared_ptr<Pozycja> p) {
    auto it = std::find(wypozyczone.begin(), wypozyczone.end(), p);
    if (it != wypozyczone.end()) {
        wypozyczone.erase(it);
        p->oddaj();
    }
}

bool Czytelnik::maWypozyczenia() const {
    return !wypozyczone.empty();
}

bool Czytelnik::maZalegle() const {
    return false;
}

void Czytelnik::wypiszWypozyczone() const {
    for (const auto& p : wypozyczone) p->wypisz();
}

void Czytelnik::wypiszZarezerwowane() const {
    for (const auto& p : zarezerwowane) p->wypisz();
}

int Czytelnik::liczbaWypozyczen() const {
    return wypozyczone.size();
}

int Czytelnik::liczbaRezerwacji() const {
    return zarezerwowane.size();
}
