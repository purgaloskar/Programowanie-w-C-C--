#ifndef CZASOPISMO_H
#define CZASOPISMO_H

#include "Pozycja.h"

class Czasopismo : public Pozycja {
public:
    Czasopismo(const std::string&, const std::string&, const std::string&, const std::string&,
               const std::string&, const std::string&, bool, bool);
    void wypisz() const override;
    std::string getTyp() const override;
};

#endif
