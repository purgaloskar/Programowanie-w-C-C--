#include <iostream>
using namespace std;

int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    int* wsk = new int[5];

    cout << "Tablica:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << tab[i] << " ";
    }
    cout << endl;

    cout << "Zaalokowana pamiec (przed przepisaniem):" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(wsk + i) << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; ++i) {
        *(wsk + i) = tab[i];
    }

    cout << "Zaalokowana pamiec (po przepisaniu):" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(wsk + i) << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; ++i) {
        (*(wsk + i))++;
    }

    cout << "Zaalokowana pamiec (po zwiekszeniu wartosci):" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(wsk + i) << " ";
    }
    cout << endl;

    delete[] wsk;
    return 0;
}
