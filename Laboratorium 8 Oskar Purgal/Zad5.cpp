#include <iostream>
#include <fstream>
#include <vector>
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

    std::vector<std::string*> linie;
    std::string line;
    while (std::getline(file, line)) {
        linie.push_back(new std::string(line));
    }

    std::cout << "Zawartość pliku:\n";
    for (auto l : linie) {
        std::cout << *l << "\n";
        delete l;
    }

    return 0;
}
