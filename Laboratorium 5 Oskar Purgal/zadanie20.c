#include <stdio.h>

int main() {
    char napis[100] = "Ala ma kota";
    char znak = 'a';
    int i, j = 0;
    for (i = 0; napis[i] != '\0'; i++) {
        if (napis[i] != znak)
            napis[j++] = napis[i];
    }
    napis[j] = '\0';
    for (i = 0; i < 100; i++) {
        if (napis[i] == '\0') printf("!\n");
        else printf("x");
    }
    return 0;
}