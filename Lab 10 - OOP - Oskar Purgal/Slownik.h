#ifndef SLOWNIK_H
#define SLOWNIK_H

#include "Pozycja.h"

class Slownik : public Pozycja {
public:
    Slownik(const std::string&, const std::string&, const std::string&, const std::string&,
            const std::string&, const std::string&, bool, bool);
    void wypisz() const override;
    std::string getTyp() const override;
};

#endif
