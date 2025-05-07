#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned int liczba, bit;
    char operacja;

    cout << "Podaj liczbe (0-255): ";
    cin >> liczba;
    cout << "Podaj numer bitu (0-7): ";
    cin >> bit;
    cout << "Wybierz operacje (u - ustaw, z - zeruj): ";
    cin >> operacja;

    if (bit > 7) {
        cout << "Niepoprawny numer bitu!" << endl;
        return 1;
    }

    if (operacja == 'u') liczba |= (1 << bit);
    else if (operacja == 'z') liczba &= ~(1 << bit);
    else {
        cout << "Niepoprawna operacja!" << endl;
        return 1;
    }

    cout << "Nowa liczba: " << liczba << " (" << bitset<8>(liczba) << ")" << endl;
    return 0;
}
