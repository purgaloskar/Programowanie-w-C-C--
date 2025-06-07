#ifndef KOLO_H
#define KOLO_H

#include "Figura.h"
#include "Punkt.h"

class Kolo : public Figura {
private:
    Punkt srodek;
    double promien;

public:
    Kolo(const std::string& n);
    void wczytaj();
    void wypisz() const override;
    double pole() const override;
    double obwod() const override;
};

#endif
