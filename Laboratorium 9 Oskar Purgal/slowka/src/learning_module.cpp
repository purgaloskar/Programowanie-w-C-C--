#include "learning_module.hpp"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <random>
#include <ctime>
#include <cctype>

std::string normalizuj(const std::string& s) {
    std::string wynik;
    for (char c : s) {
        if (!isspace(c))
            wynik += std::tolower(c);
    }
    return wynik;
}

bool Nauka::wczytajSlowka(const std::string& nazwa, std::string& blad) {
    std::ifstream plik(nazwa);
    if (!plik.is_open()) {
        blad = "Nie można otworzyć pliku.";
        return false;
    }

    std::string linia;
    for (int i = 0; i < 4; ++i) std::getline(plik, linia);

    while (std::getline(plik, linia)) {
        Slowko s;
        s.polskie = linia;

        if (!std::getline(plik, linia)) {
            blad = "Brakuje tłumaczenia.";
            return false;
        }

        std::stringstream ss(linia);
        std::string ang;
        while (std::getline(ss, ang, ',')) {
            s.angielskie.push_back(normalizuj(ang));
        }

        slowka.push_back(s);
    }

    std::mt19937 g(std::time(nullptr));
    std::shuffle(slowka.begin(), slowka.end(), g);

    return true;
}

bool Nauka::puste() const {
    return slowka.empty();
}

Slowko Nauka::losuj() {
    return slowka.front();
}

bool Nauka::ocenOdpowiedzRef(const std::string& polskie, const std::string& odp, int intensywnosc) {
    std::string odp_norm = normalizuj(odp);

    for (auto it = slowka.begin(); it != slowka.end(); ++it) {
        if (normalizuj(it->polskie) == normalizuj(polskie)) {
            it->proby++;
            suma_proby++;

            for (const auto& ang : it->angielskie) {
                if (odp_norm == ang) {
                    it->poprawne++;
                    if (it->poprawne >= intensywnosc) {
                        slowka.erase(it);
                        nauczone++;
                    } else {
                        std::rotate(slowka.begin(), slowka.begin() + 1, slowka.end());
                    }
                    return true;
                }
            }

            std::rotate(slowka.begin(), slowka.begin() + 1, slowka.end());
            return false;
        }
    }

    return false;
}

int Nauka::ileWszystkich() const {
    return slowka.size() + nauczone;
}

int Nauka::ileNauczonych() const {
    return nauczone;
}

double Nauka::getSredniaProby() const {
    return nauczone > 0 ? (double)suma_proby / nauczone : 0.0;
}

