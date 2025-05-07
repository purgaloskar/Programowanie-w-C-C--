#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wypisz_bez_bialych(const char *sciezka) {
    FILE *f = fopen(sciezka, "r");
    if (!f) {
        printf("Nie można otworzyć pliku\n");
        return;
    }
    int c;
    while ((c = fgetc(f)) != EOF) {
        if (!isspace(c)) putchar(c);
    }
    fclose(f);
}

int porownaj(const char *a, const char *b) {
    FILE *f1 = fopen(a, "r");
    FILE *f2 = fopen(b, "r");
    if (!f1 || !f2) return 0;
    int c1, c2;
    do {
        c1 = fgetc(f1);
        c2 = fgetc(f2);
        if (c1 != c2) {
            fclose(f1);
            fclose(f2);
            return 0;
        }
    } while (c1 != EOF && c2 != EOF);
    fclose(f1);
    fclose(f2);
    return 1;
}

FILE* otworz_koniec(const char *sciezka) {
    return fopen(sciezka, "a");
}

FILE* otworz_zastap(const char *sciezka) {
    return fopen(sciezka, "w");
}

void wpisz(FILE *f, int n) {
    char buf[256];
    printf("Wpisz %d wierszy tekstu:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(buf, 256, stdin);
        fputs(buf, f);
    }
}

int main() {
    char plik1[100], plik2[100];
    printf("Podaj dwa pliki do porównania:\n");
    scanf("%s %s", plik1, plik2);
    if (porownaj(plik1, plik2)) {
        printf("Pliki są identyczne\n");
    } else {
        printf("Pliki są różne\n");
    }
    return 0;
}
