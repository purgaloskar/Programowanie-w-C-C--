#include <iostream>
#include <fstream>

void kopiuj_binarnie_cpp(const std::string &srcname, const std::string &dstname, bool procenty) {
    std::ifstream src(srcname, std::ios::binary);
    std::ofstream dst(dstname, std::ios::binary);
    if (!src || !dst) {
        std::cout << "Nie można otworzyć plików\n";
        return;
    }

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

    bool procenty = std::string(argv[3]) == "-p";
    kopiuj_binarnie_cpp(argv[1], argv[2], procenty);
    return 0;
}
