#ifndef PUNKT_H
#define PUNKT_H

#include <string>

class Punkt {
private:
    double x, y;
    std::string nazwa;

public:
    Punkt();
    Punkt(double x, double y, const std::string& nazwa);
    void wczytaj();
    void wypisz() const;
    double getX() const;
    double getY() const;
    std::string getNazwa() const;
};

#endif
