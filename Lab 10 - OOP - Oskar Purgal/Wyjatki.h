#ifndef WYJATKI_H
#define WYJATKI_H

#include <stdexcept>

class LimitWypozyczenException : public std::runtime_error {
public:
    LimitWypozyczenException() : std::runtime_error("Limit wypozyczen przekroczony") {}
};

class LimitRezerwacjiException : public std::runtime_error {
public:
    LimitRezerwacjiException() : std::runtime_error("Limit rezerwacji przekroczony") {}
};

class PozycjaZarezerwowanaException : public std::runtime_error {
public:
    PozycjaZarezerwowanaException() : std::runtime_error("Pozycja jest zarezerwowana") {}
};

class PozycjaWypozyczonaException : public std::runtime_error {
public:
    PozycjaWypozyczonaException() : std::runtime_error("Pozycja jest wypozyczona") {}
};

class CzytelnikMaWypozyczeniaException : public std::runtime_error {
public:
    CzytelnikMaWypozyczeniaException() : std::runtime_error("Czytelnik ma wypozyczone pozycje") {}
};

#endif
