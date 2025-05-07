#include <stdio.h>
#include <string.h>

int main() {
    const char *wskaznik = "Tekst pierwszy";
    char tablica[50] = "Tekst drugi";

    printf("%s\n", wskaznik);
    printf("%s\n", tablica);

    wskaznik = "Nowy tekst";
    strcpy(tablica, "Nowy tekst 2");

    printf("%s\n", wskaznik);
    printf("%s\n", tablica);

    tablica[0] = 'X';

    printf("%s\n", wskaznik);
    printf("%s\n", tablica);

    return 0;
}
