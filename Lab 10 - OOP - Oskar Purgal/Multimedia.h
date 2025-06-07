#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include "Pozycja.h"

class Multimedia : public Pozycja {
public:
    Multimedia(const std::string&, const std::string&, const std::string&, const std::string&,
               const std::string&, const std::string&, bool, bool);
    void wypisz() const override;
    std::string getTyp() const override;
};

#endif
