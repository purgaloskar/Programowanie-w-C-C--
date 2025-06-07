#ifndef PROSTOKAT_H
#define PROSTOKAT_H

#include "Punkt.h"
#include <string>

class Prostokat {
private:
    Punkt a, b;
    std::string nazwa;

public:
    Prostokat();
    Prostokat(Punkt p1, Punkt p2, const std::string& n);
    ~Prostokat();
    void wczytaj();
    void wypisz() const;
    double pole() const;
    double obwod() const;
};

#endif

