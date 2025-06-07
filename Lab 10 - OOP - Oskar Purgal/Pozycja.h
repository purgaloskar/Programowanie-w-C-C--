#ifndef POZYCJA_H
#define POZYCJA_H

#include <string>

class Pozycja {
protected:
    std::string numerKatalogowy;
    std::string numerISBN;
    std::string autor;
    std::string tytul;
    std::string dataWydania;
    std::string wydawnictwo;
    bool zarezerwowana;
    bool wypozyczona;

public:
    Pozycja(const std::string&, const std::string&, const std::string&, const std::string&,
            const std::string&, const std::string&, bool, bool);
    virtual ~Pozycja() = default;

    virtual void wypisz() const = 0;
    virtual std::string getTyp() const = 0;

    const std::string& getNumerKatalogowy() const;
    const std::string& getISBN() const;
    const std::string& getTytul() const;
    bool isZarezerwowana() const;
    bool isWypozyczona() const;

    void zarezerwuj();
    void wypozycz();
    void oddaj();
};

#endif
