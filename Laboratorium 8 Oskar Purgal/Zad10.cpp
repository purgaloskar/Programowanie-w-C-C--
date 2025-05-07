#include <iostream>
#include <fstream>

void zapisz_cpp(const std::string &plik, int **tab, int n, int m) {
    std::ofstream f(plik, std::ios::binary);
    for (int i = 0; i < n; i++) {
        f.write((char*)tab[i], m * sizeof(int));
    }
}

void odczytaj_cpp(const std::string &plik, int n, int m) {
    std::ifstream f(plik, std::ios::binary);
    int x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            f.read((char*)&x, sizeof(int));
            std::cout << x << "\t";
        }
        std::cout << "\n";
    }
}

int main() {
    int n = 10, m = 10;
    int **tab = new int*[n];
    for (int i = 0; i < n; i++) {
        tab[i] = new int[m];
        for (int j = 0; j < m; j++) {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }

    std::string nazwa;
    std::cout << "Podaj nazwę pliku:\n";
    std::cin >> nazwa;

    zapisz_cpp(nazwa, tab, n, m);
    std::cout << "Zawartość pliku:\n";
    odczytaj_cpp(nazwa, n, m);

    for (int i = 0; i < n; i++) delete[] tab[i];
    delete[] tab;
    return 0;
}
