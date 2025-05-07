#include <iostream>
#include <fstream>
#include <cctype>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Użycie: " << argv[0] << " <plik> [min2]\n";
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cout << "Nie można otworzyć pliku\n";
        return 1;
    }

    int znaki = 0, male = 0, duze = 0, wyrazy = 0, dl = 0;
    bool tryb_min2 = argc > 2 && std::string(argv[2]) == "min2";
    char c;

    while (file.get(c)) {
        znaki++;
        if (islower(c)) male++;
        if (isupper(c)) duze++;
        if (isspace(c) || ispunct(c)) {
            if ((tryb_min2 && dl >= 2) || (!tryb_min2 && dl > 0)) wyrazy++;
            dl = 0;
        } else {
            dl++;
        }
    }
    if ((tryb_min2 && dl >= 2) || (!tryb_min2 && dl > 0)) wyrazy++;

    std::cout << "Znaków: " << znaki << "\nMałych liter: " << male << "\nDużych liter: " << duze << "\nWyrazów: " << wyrazy << "\n";
    return 0;
}
