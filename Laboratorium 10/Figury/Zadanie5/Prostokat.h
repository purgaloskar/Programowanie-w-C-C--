#ifndef PROSTOKAT_H
#define PROSTOKAT_H

#include "Figura.h"
#include "Punkt.h"

class Prostokat : public Figura {
private:
    Punkt a, b;

public:
    Prostokat(const std::string& n);
    void wczytaj();
    void wypisz() const override;
    double pole() const override;
    double obwod() const override;
};

#endif
