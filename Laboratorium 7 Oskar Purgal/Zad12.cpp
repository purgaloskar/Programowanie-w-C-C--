#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int zlicz(int t[], int n, int wartosc) {
    int ile = 0;
    for (int i = 0; i < n; i++) if (t[i] == wartosc) ile++;
    return ile;
}

void lostab(int t[], int n, int max) {
    srand(time(0));
    for (int i = 0; i < n; i++) t[i] = rand() % (max + 1);
}

int main() {
    int tab[10];
    lostab(tab, 10, 5);
    for (int i = 0; i < 10; i++) cout << tab[i] << " ";
    cout << endl << zlicz(tab, 10, 3) << endl;
}

