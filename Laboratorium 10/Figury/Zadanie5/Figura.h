#ifndef FIGURA_H
#define FIGURA_H

#include <string>

class Figura {
protected:
    std::string nazwa;

public:
    Figura(const std::string& n);
    virtual ~Figura();
    virtual void wypisz() const = 0;
    virtual double pole() const = 0;
    virtual double obwod() const = 0;
};

#endif
