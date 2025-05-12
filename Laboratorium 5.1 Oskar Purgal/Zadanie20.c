#include <stdio.h>

int main() {
    char napis[100];
    char znak;
    printf("Podaj napis: ");
    fgets(napis, sizeof(napis), stdin);

    for (int i = 0; napis[i] != '\0'; i++)
        if (napis[i] == '\n')
            napis[i] = '\0';

    printf("Podaj znak do usuniecia: ");
    scanf(" %c", &znak);

    int i = 0, j = 0;
    while (napis[i] != '\0') {
        if (napis[i] != znak) {
            napis[j] = napis[i];
            j++;
        }
        i++;
    }
    napis[j] = '\0';

    printf("Napis po usunieciu znaku: %s\n", napis);

    printf("Mapa znakow:\n");
    for (int k = 0; k < 100; k++) {
        if (napis[k] == '\0')
            printf("!");
        else
            printf("x");
    }
    printf("\n");

    return 0;
}
