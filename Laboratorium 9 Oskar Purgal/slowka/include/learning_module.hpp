#ifndef LEARNING_MODULE_HPP
#define LEARNING_MODULE_HPP

#include <string>
#include <vector>

struct Slowko {
    std::string polskie;
    std::vector<std::string> angielskie;
    int poprawne = 0;
    int proby = 0;
};

class Nauka {
public:
    bool wczytajSlowka(const std::string& nazwa_pliku, std::string& blad);
    bool puste() const;
    Slowko losuj();
    bool ocenOdpowiedzRef(const std::string& polskie, const std::string& odp, int intensywnosc);
    int ileWszystkich() const;
    int ileNauczonych() const;
    double getSredniaProby() const;

private:
    std::vector<Slowko> slowka;
    int nauczone = 0;
    int suma_proby = 0;
};

#endif

