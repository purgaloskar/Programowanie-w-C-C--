#include <iostream>
using namespace std;

int main() {
    int tab[2];
    int* a = &tab[0];
    int* b = &tab[1];

    cout << "Podaj pierwsza liczbe: ";
    cin >> *a;
    cout << "Podaj druga liczbe: ";
    cin >> *b;

    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "Po zamianie: a = " << *a << ", b = " << *b << endl;
    return 0;
}
