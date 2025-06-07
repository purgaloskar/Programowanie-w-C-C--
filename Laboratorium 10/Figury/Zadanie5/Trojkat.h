#ifndef TROJKAT_H
#define TROJKAT_H

#include "Figura.h"
#include "Punkt.h"

class Trojkat : public Figura {
private:
    Punkt a, b, c;

public:
    Trojkat(const std::string& n);
    void wczytaj();
    void wypisz() const override;
    double pole() const override;
    double obwod() const override;
};

#endif
