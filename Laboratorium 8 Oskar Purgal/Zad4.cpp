#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string nazwa;
    std::cout << "Podaj nazwę pliku:\n";
    std::cin >> nazwa;
    std::ifstream file(nazwa);
    if (!file) {
        std::cout << "Nie można otworzyć pliku\n";
        return 1;
    }

    std::string line;
    int licznik = 0, max_dlugosc = 0;
    while (std::getline(file, line)) {
        licznik++;
        if (line.length() > max_dlugosc)
            max_dlugosc = line.length();
    }

    std::cout << "Liczba wierszy: " << licznik << "\nMaksymalna długość wiersza: " << max_dlugosc << "\n";
    return 0;
}
