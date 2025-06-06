PROGRAM DO NAUKI SŁÓWEK – OSKAR PURGAL

WYMAGANIA:
- Linux lub WSL (Ubuntu)

- Zainstalowane: g++, cmake, make 
(Komenda do instalacji owych rzeczy:
sudo apt update
sudo apt install g++ cmake make -y)

- Terminal obsługujący Unicode (polskie znaki), najlepiej rozmiar min. 80x25

STRUKTURA FOLDERU:
slowka/
├── CMakeLists.txt
├── data/
│   └── slowa.txt         ← Słówka
├── src/
│   ├── main.cpp
│   ├── learning_module.cpp
│   ├── learning_module.hpp
│   ├── file_validator.cpp
│   ├── file_validator.hpp
│   ├── statistics_module.cpp
│   └── statistics_module.hpp

INSTALACJA I URUCHOMIENIE:

1. Otwórz terminal i przejdź do folderu:
   -cd slowka

2. Utwórz folder build: (Jak jest to usuń komenda rmdir build)
   -mkdir build
   -cd build

3. Będąc w folderze build, wykonaj polecenie:
   -cmake ..

4. A następnie skompiluj program:
   cmake --build . (z kropką po spacji)

5. Uruchom program:
   ./slowka -f ../data/slowa.txt -i 2 -imie Oskar -nazwisko Purgal

   (możesz zmienić imię/nazwisko i poziom intensywności)

OPCJE:
  -f        → ścieżka do pliku ze słówkami
  -i        → intensywność nauki (ile razy trzeba poprawnie wpisać dane słowo)
  -imie     → imię użytkownika
  -nazwisko → nazwisko użytkownika

PRZYKŁAD:
./slowka -f ../data/slowa.txt -i 2 -imie Ania -nazwisko Nowak (przyklad)

FORMAT PLIKU ZE SŁÓWKAMI:
Pierwsze 4 linie to komentarze które są ignorowane.  
Od 5. linijki:  
  naprzemiennie:
  - linia z polskim słowem
  - linia z angielskimi tłumaczeniami oddzielonymi przecinkami jeżeli jest więcej znaczeń danego słówka (bez spacji!)

Przykład:
oko
eye
płuca
lungs

Dziękuje :)
