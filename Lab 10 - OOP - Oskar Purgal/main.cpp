#include "Biblioteka.h"
#include "Czytelnik.h"
#include "Ksiazka.h"
#include <iostream>
#include <regex>

void pokazMenu() {
    std::cout << "\033[1;34m\n===== SYSTEM BIBLIOTECZNY =====\033[0m\n";
    std::cout << "\033[1;32m1.\033[0m Dodaj czytelnika\n";
    std::cout << "\033[1;32m2.\033[0m Wypożycz pozycję\n";
    std::cout << "\033[1;32m3.\033[0m Zarezerwuj pozycję\n";
    std::cout << "\033[1;32m4.\033[0m Oddaj pozycję\n";
    std::cout << "\033[1;32m5.\033[0m Wyświetl wszystkie pozycje\n";
    std::cout << "\033[1;32m6.\033[0m Wyświetl wszystkich czytelników\n";
    std::cout << "\033[1;31m0.\033[0m Wyjdź\n";
    std::cout << "\033[1;33mWybierz opcję:\033[0m ";
}

std::string sformatujKod(std::string kod) {
    while (kod.length() < 3)
        kod = "0" + kod;
    return kod;
}

bool walidujPesel(const std::string& pesel) {
    return std::regex_match(pesel, std::regex("^\\d{11}$"));
}

int main() {
    Biblioteka b;
    b.wczytajZPlikuCSV("biblioteka.csv");

    bool dziala = true;
    while (dziala) {
        pokazMenu();
        int wybor;
        std::cin >> wybor;

        std::string pesel, imie, nazwisko, telefon, kod;

        try {
            switch (wybor) {
                case 1:
                    std::cout << "\n\033[1;36mNowy czytelnik:\033[0m\n";
                    std::cout << "PESEL: "; std::cin >> pesel;
                    if (!walidujPesel(pesel)) {
                        std::cout << "\033[1;31mBłąd: PESEL musi mieć dokładnie 11 cyfr!\033[0m\n";
                        break;
                    }
                    std::cout << "Imię: "; std::cin >> imie;
                    std::cout << "Nazwisko: "; std::cin >> nazwisko;
                    std::cout << "Telefon: "; std::cin >> telefon;
                    b.dodajCzytelnika(Czytelnik(pesel, imie, nazwisko, telefon));
                    std::cout << "\033[1;32mCzytelnik dodany.\033[0m\n";
                    break;
                case 2:
                    std::cout << "\n\033[1;36mWypożyczenie:\033[0m\n";
                    std::cout << "PESEL: "; std::cin >> pesel;
                    if (!walidujPesel(pesel)) {
                        std::cout << "\033[1;31mBłąd: PESEL musi mieć dokładnie 11 cyfr!\033[0m\n";
                        break;
                    }
                    std::cout << "Kod pozycji: "; std::cin >> kod;
                    kod = sformatujKod(kod);
                    b.wypozyczPozycje(pesel, kod);
                    std::cout << "\033[1;32mPozycja wypożyczona.\033[0m\n";
                    break;
                case 3:
                    std::cout << "\n\033[1;36mRezerwacja:\033[0m\n";
                    std::cout << "PESEL: "; std::cin >> pesel;
                    if (!walidujPesel(pesel)) {
                        std::cout << "\033[1;31mBłąd: PESEL musi mieć dokładnie 11 cyfr!\033[0m\n";
                        break;
                    }
                    std::cout << "Kod pozycji: "; std::cin >> kod;
                    kod = sformatujKod(kod);
                    b.zarezerwujPozycje(pesel, kod);
                    std::cout << "\033[1;32mPozycja zarezerwowana.\033[0m\n";
                    break;
                case 4:
                    std::cout << "\n\033[1;36mZwrot:\033[0m\n";
                    std::cout << "PESEL: "; std::cin >> pesel;
                    if (!walidujPesel(pesel)) {
                        std::cout << "\033[1;31mBłąd: PESEL musi mieć dokładnie 11 cyfr!\033[0m\n";
                        break;
                    }
                    std::cout << "Kod pozycji: "; std::cin >> kod;
                    kod = sformatujKod(kod);
                    b.oddajPozycje(pesel, kod);
                    std::cout << "\033[1;32mPozycja oddana.\033[0m\n";
                    break;
                case 5:
                    std::cout << "\n\033[1;36mLista wszystkich pozycji:\033[0m\n";
                    b.wypiszPozycje();
                    break;
                case 6:
                    std::cout << "\n\033[1;36mLista czytelników:\033[0m\n";
                    b.wypiszCzytelnikow();
                    break;
                case 0:
                    dziala = false;
                    std::cout << "\033[1;31mZamykam program...\033[0m\n";
                    break;
                default:
                    std::cout << "\033[1;33mNieprawidłowa opcja.\033[0m\n";
                    break;
            }
        } catch (const std::exception& e) {
            std::cout << "\033[1;31mBłąd: " << e.what() << "\033[0m\n";
        }
    }

    return 0;
}
