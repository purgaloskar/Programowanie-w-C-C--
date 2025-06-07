#include "Biblioteka.h"
#include "Ksiazka.h"
#include "Multimedia.h"
#include "Czasopismo.h"
#include "Slownik.h"
#include <fstream>
#include <sstream>
#include <iostream>

Biblioteka::Biblioteka() = default;

void Biblioteka::wczytajZPlikuCSV(const std::string& nazwa) {
    std::ifstream plik(nazwa);
    std::string linia;

    while (getline(plik, linia)) {
        std::stringstream ss(linia);
        std::string nrKat, isbn, autor, tytul, data, wyd, typ, rezStr, wypStr;
        getline(ss, nrKat, ',');
        getline(ss, isbn, ',');
        getline(ss, autor, ',');
        getline(ss, tytul, ',');
        getline(ss, data, ',');
        getline(ss, wyd, ',');
        getline(ss, typ, ',');
        getline(ss, rezStr, ',');
        getline(ss, wypStr, ',');

        bool rez = rezStr == "1";
        bool wyp = wypStr == "1";

        std::shared_ptr<Pozycja> p;
        if (typ == "ksiazka") p = std::make_shared<Ksiazka>(nrKat, isbn, autor, tytul, wyd, data, rez, wyp);
        else if (typ == "multimedia") p = std::make_shared<Multimedia>(nrKat, isbn, autor, tytul, wyd, data, rez, wyp);
        else if (typ == "czasopismo") p = std::make_shared<Czasopismo>(nrKat, isbn, autor, tytul, wyd, data, rez, wyp);
        else if (typ == "slownik") p = std::make_shared<Slownik>(nrKat, isbn, autor, tytul, wyd, data, rez, wyp);

        if (p) pozycje.push_back(p);
    }
}

void Biblioteka::dodajCzytelnika(const Czytelnik& c) {
    czytelnicy.push_back(c);
}

void Biblioteka::usunCzytelnika(const std::string& pesel) {
    for (auto it = czytelnicy.begin(); it != czytelnicy.end(); ++it) {
        if (it->getPesel() == pesel) {
            if (it->maWypozyczenia()) throw std::runtime_error("Nie mozna usunac czytelnika z wypozyczeniami");
            czytelnicy.erase(it);
            return;
        }
    }
}

void Biblioteka::dodajPozycje(std::shared_ptr<Pozycja> p) {
    pozycje.push_back(p);
}

void Biblioteka::usunPozycje(const std::string& nrKat) {
    for (auto it = pozycje.begin(); it != pozycje.end(); ++it) {
        if ((*it)->getNumerKatalogowy() == nrKat) {
            if ((*it)->isWypozyczona() || (*it)->isZarezerwowana())
                throw std::runtime_error("Pozycja aktywna, nie mozna usunac");
            pozycje.erase(it);
            return;
        }
    }
}

std::shared_ptr<Pozycja> Biblioteka::znajdzPozycje(const std::string& nrKat) {
    for (auto& p : pozycje) {
        if (p->getNumerKatalogowy() == nrKat)
            return p;
    }
    return nullptr;
}

Czytelnik* Biblioteka::znajdzCzytelnika(const std::string& pesel) {
    for (auto& c : czytelnicy) {
        if (c.getPesel() == pesel)
            return &c;
    }
    return nullptr;
}

void Biblioteka::wypozyczPozycje(const std::string& pesel, const std::string& nrKat) {
    auto p = znajdzPozycje(nrKat);
    auto c = znajdzCzytelnika(pesel);
    if (!p || !c) throw std::runtime_error("Nie znaleziono pozycji lub czytelnika");
    c->wypozycz(p);
}

void Biblioteka::zarezerwujPozycje(const std::string& pesel, const std::string& nrKat) {
    auto p = znajdzPozycje(nrKat);
    auto c = znajdzCzytelnika(pesel);
    if (!p || !c) throw std::runtime_error("Nie znaleziono pozycji lub czytelnika");
    c->zarezerwuj(p);
}

void Biblioteka::oddajPozycje(const std::string& pesel, const std::string& nrKat) {
    auto p = znajdzPozycje(nrKat);
    auto c = znajdzCzytelnika(pesel);
    if (!p || !c) throw std::runtime_error("Nie znaleziono pozycji lub czytelnika");
    c->oddaj(p);
}

void Biblioteka::wypiszPozycje() const {
    for (const auto& p : pozycje)
        p->wypisz();
}

void Biblioteka::wypiszCzytelnikow() const {
    for (const auto& c : czytelnicy)
        std::cout << c.getImie() << " " << c.getNazwisko() << " [" << c.getPesel() << "]" << std::endl;
}
