#include "file_validator.hpp"
#include <fstream>

bool sprawdzPoprawnoscPliku(const std::string& nazwa_pliku, std::string& blad) {
    std::ifstream plik(nazwa_pliku);
    if (!plik.is_open()) {
        blad = "Nie można otworzyć pliku.";
        return false;
    }
    int licznik = 0;
    std::string linia;
    while (std::getline(plik, linia)) {
        licznik++;
    }
    if (licznik < 6) {
        blad = "Plik zawiera za mało danych.";
        return false;
    }
    return true;
}

