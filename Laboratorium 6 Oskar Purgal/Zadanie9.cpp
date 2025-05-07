#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* wskaznik = "Tekst pierwszy";
    char tablica[50] = "Tekst drugi";

    cout << wskaznik << endl;
    cout << tablica << endl;

    wskaznik = "Nowy tekst";
    strcpy(tablica, "Nowy tekst 2");

    cout << wskaznik << endl;
    cout << tablica << endl;

    tablica[0] = 'X';

    cout << wskaznik << endl;
    cout << tablica << endl;

    return 0;
}
