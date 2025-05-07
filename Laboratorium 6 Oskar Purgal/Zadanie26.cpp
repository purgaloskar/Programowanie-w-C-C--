#include <iostream>
using namespace std;

int main() {
    int* wsk1;
    int* wsk2 = new int;

    cout << "Adresy:" << endl;
    cout << "wsk1: " << wsk1 << endl;
    cout << "wsk2: " << wsk2 << endl;

    cout << "Zawartość przed inicjalizacją:" << endl;
    cout << "wsk1 -> " << *wsk1 << endl;
    cout << "wsk2 -> " << *wsk2 << endl;

    wsk1 = new int;
    *wsk1 = 10;
    *wsk2 = 20;

    cout << "Po inicjalizacji:" << endl;
    cout << "wsk1 -> " << *wsk1 << endl;
    cout << "wsk2 -> " << *wsk2 << endl;

    delete wsk1;
    delete wsk2;

    cout << "Po zwolnieniu pamięci:" << endl;
    cout << "wsk1: " << wsk1 << endl;
    cout << "wsk2: " << wsk2 << endl;

    return 0;
}
