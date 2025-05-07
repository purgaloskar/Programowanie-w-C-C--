#include <stdio.h>

int main() {
    int tab[100];
    for (int i = 0; i < 100; i++) tab[i] = i % 2;
    int wynik = tab[0];
    for (int i = 1; i < 100; i++) wynik ^= tab[i];
    printf("%d\n", wynik);
    return 0;
}