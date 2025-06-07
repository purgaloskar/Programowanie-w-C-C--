#ifndef KSIAZKA_H
#define KSIAZKA_H

#include "Pozycja.h"

class Ksiazka : public Pozycja {
public:
    Ksiazka(const std::string&, const std::string&, const std::string&, const std::string&,
            const std::string&, const std::string&, bool, bool);
    void wypisz() const override;
    std::string getTyp() const override;
};

#endif
