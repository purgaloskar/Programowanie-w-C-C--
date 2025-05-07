#include <iostream>
#include <fstream>

void kopiuj_cpp(std::ifstream &src, std::ofstream &dst, bool procenty) {
    src.seekg(0, std::ios::end);
    long rozmiar = src.tellg();
    src.seekg(0);
    long przeczytane = 0;
    char c;
    while (src.get(c)) {
        dst.put(c);
        przeczytane++;
        if (procenty)
            std::cout << "\r" << (100 * przeczytane / rozmiar) << "%";
        else
            std::cout << "\r" << przeczytane << " bajtów";
    }
    std::cout << "\n";
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cout << "Użycie: <program> <plik źródłowy> <plik docelowy> <-p|-b>\n";
        return 1;
    }

    std::ifstream src(argv[1]);
    std::ofstream dst(argv[2]);
    if (!src || !dst) {
        std::cout << "Błąd otwarcia plików\n";
        return 1;
    }

    bool procenty = std::string(argv[3]) == "-p";
    kopiuj_cpp(src, dst, procenty);
    return 0;
}
