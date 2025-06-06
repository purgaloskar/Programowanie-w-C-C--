#include <iostream>
#include <string>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/dom/elements.hpp>
#include "file_validator.hpp"
#include "learning_module.hpp"
#include "statistics_module.hpp"

int main(int argc, char* argv[]) {
    using namespace ftxui;

    std::string nazwa_pliku;
    int intensywnosc = 2;
    std::string imie = "Oskar";
    std::string nazwisko = "Purgal";

    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "-f" && i + 1 < argc) {
            nazwa_pliku = argv[++i];
        } else if (arg == "-i" && i + 1 < argc) {
            intensywnosc = std::stoi(argv[++i]);
        } else if (arg == "-imie" && i + 1 < argc) {
            imie = argv[++i];
        } else if (arg == "-nazwisko" && i + 1 < argc) {
            nazwisko = argv[++i];
        }
    }

    if (nazwa_pliku.empty()) {
        std::cout << "Użycie: ./slowka -f plik -i intensywnosc [-imie Oskar] [-nazwisko Purgal]" << std::endl;
        return 1;
    }

    std::string blad;
    if (!sprawdzPoprawnoscPliku(nazwa_pliku, blad)) {
        std::cout << "Błąd pliku: " << blad << std::endl;
        return 1;
    }

    Nauka nauka;
    if (!nauka.wczytajSlowka(nazwa_pliku, blad)) {
        std::cout << "Błąd: " << blad << std::endl;
        return 1;
    }

    auto screen = ftxui::ScreenInteractive::TerminalOutput();
    std::string aktualne_slowo = nauka.losuj().polskie;
    std::string odpowiedz;
    std::string komunikat;
    ftxui::Color kolor = ftxui::Color::Default;

    auto input = ftxui::Input(&odpowiedz, "Wpisz Odpowiedź");
    input |= ftxui::CatchEvent([&](const ftxui::Event& e) {
        if (e == ftxui::Event::Return) {
            bool poprawna = nauka.ocenOdpowiedzRef(aktualne_slowo, odpowiedz, intensywnosc);
            komunikat = poprawna ? "Super, dokładnie tak!" : "Oj, nie to słówko :)";
            kolor = poprawna ? ftxui::Color::Green : ftxui::Color::Red;
            if (!nauka.puste()) {
                aktualne_slowo = nauka.losuj().polskie;
                odpowiedz.clear();
            } else {
                screen.Exit();
            }
            return true;
        }
        return false;
    });

    auto layout = ftxui::Container::Vertical({ input });

    auto renderer = ftxui::Renderer(layout, [&] {
        return ftxui::vbox({
            ftxui::text("Przetłumacz: " + aktualne_slowo) | ftxui::bold | ftxui::color(ftxui::Color::Yellow),
            input->Render(),
            ftxui::text(komunikat) | ftxui::color(kolor)
        }) | ftxui::border;
    });

    screen.Loop(renderer);

    int czas = 0;
    zapiszStatystyki("statystyki.txt", imie, nazwisko, czas, nauka.ileWszystkich(), nauka.getSredniaProby());
    return 0;
}

