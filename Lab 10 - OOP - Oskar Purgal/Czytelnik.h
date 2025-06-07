#ifndef CZYTELNIK_H
#define CZYTELNIK_H

#include <string>
#include <vector>
#include <memory>
#include "Pozycja.h"

class Czytelnik {
    std::string pesel;
    std::string imie;
    std::string nazwisko;
    std::string telefon;

    std::vector<std::shared_ptr<Pozycja>> wypozyczone;
    std::vector<std::shared_ptr<Pozycja>> zarezerwowane;

public:
    Czytelnik(const std::string&, const std::string&, const std::string&, const std::string&);

    const std::string& getPesel() const;
    const std::string& getImie() const;
    const std::string& getNazwisko() const;

    void wypozycz(std::shared_ptr<Pozycja>);
    void zarezerwuj(std::shared_ptr<Pozycja>);
    void oddaj(std::shared_ptr<Pozycja>);

    bool maWypozyczenia() const;
    bool maZalegle() const;

    void wypiszWypozyczone() const;
    void wypiszZarezerwowane() const;

    int liczbaWypozyczen() const;
    int liczbaRezerwacji() const;
};

#endif
