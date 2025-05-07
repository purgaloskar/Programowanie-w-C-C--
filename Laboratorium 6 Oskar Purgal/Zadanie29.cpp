#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
    int n = 0;
    char szukany = '\0';

    for (int i = 1; i < argc; i += 2) {
        if (strcmp(argv[i], "-n") == 0) {
            n = atoi(argv[i + 1]);
        } else if (strcmp(argv[i], "-c") == 0) {
            szukany = argv[i + 1][0];
        }
    }

    if (n <= 0 || szukany == '\0') {
        cout << "Uzycie: program -c znak -n liczba" << endl;
        return 1;
    }

    srand(time(0));
    char* tab = new char[n + 1];

    for (int i = 0; i < n; ++i) {
        tab[i] = 'A' + rand() % ('z' - 'A' + 1);
    }
    tab[n] = '\0';

    cout << "Tablica: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << tab[i];
    }
    cout << endl;

    int licznik = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i] == szukany) {
            ++licznik;
        }
    }

    cout << "Znak '" << szukany << "' wystapil " << licznik << " razy." << endl;

    delete[] tab;
    return 0;
}
