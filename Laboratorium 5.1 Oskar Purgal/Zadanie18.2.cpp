#include <iostream>
#include <iomanip>
#include <bitset>
#include <cstring>

using namespace std;

union Dane {
    int i;
    float f;
    char c[4];
    wchar_t wc[2];
};

void wypiszBity(const char* dane, size_t rozmiar) {
    for (size_t i = 0; i < rozmiar; i++)
        cout << bitset<8>(static_cast<unsigned char>(dane[i])) << " ";
    cout << endl;
}

int main() {
    Dane d;

    cout << "Podaj liczbe calkowita (int): ";
    cin >> d.i;
    cout << "int: dziesietnie = " << d.i << ", hex = 0x" << hex << d.i << dec << endl;
    cout << "Bity (int): ";
    wypiszBity(reinterpret_cast<char*>(&d.i), sizeof(d.i));

    cout << "float: dziesietnie = " << d.f << ", hex = 0x" << hex << *(reinterpret_cast<unsigned int*>(&d.f)) << dec << endl;
    cout << "Bity (float): ";
    wypiszBity(reinterpret_cast<char*>(&d.f), sizeof(d.f));

    cout << "char[4]: ";
    for (int i = 0; i < 4; i++)
        cout << d.c[i] << " ";
    cout << endl;
    cout << "Bity (char[4]): ";
    wypiszBity(d.c, 4);

    cout << "wchar_t[2]: ";
    for (int i = 0; i < 2; i++)
        wcout << d.wc[i] << " ";
    wcout << endl;
    cout << "Bity (wchar_t[2]): ";
    wypiszBity(reinterpret_cast<char*>(d.wc), sizeof(d.wc));

    return 0;
}
