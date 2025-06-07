#ifndef KOLO_H
#define KOLO_H

#include "Punkt.h"
#include <string>

class Kolo {
private:
    Punkt srodek;
    double promien;
    std::string nazwa;

public:
    Kolo();
    Kolo(Punkt s, double r, const std::string& n);
    ~Kolo();
    void wczytaj();
    void wypisz() const;
    double pole() const;
    double obwod() const;
};

#endif

