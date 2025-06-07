#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

#include <vector>
#include <memory>
#include <string>
#include "Pozycja.h"
#include "Czytelnik.h"

class Biblioteka {
private:
    std::vector<std::shared_ptr<Pozycja>> pozycje;
    std::vector<Czytelnik> czytelnicy;

public:
    Biblioteka();

    void wczytajZPlikuCSV(const std::string& nazwa);
    void dodajCzytelnika(const Czytelnik& c);
    void usunCzytelnika(const std::string& pesel);
    void dodajPozycje(std::shared_ptr<Pozycja> p);
    void usunPozycje(const std::string& nrKat);

    std::shared_ptr<Pozycja> znajdzPozycje(const std::string& nrKat);
    Czytelnik* znajdzCzytelnika(const std::string& pesel);

    void wypozyczPozycje(const std::string& pesel, const std::string& nrKat);
    void zarezerwujPozycje(const std::string& pesel, const std::string& nrKat);
    void oddajPozycje(const std::string& pesel, const std::string& nrKat);

    void wypiszPozycje() const;
    void wypiszCzytelnikow() const;
};

#endif
