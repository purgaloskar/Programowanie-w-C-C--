#include <stdio.h>
#include <stdlib.h>

void zapisz_c(const char *plik, int **tab, int n, int m) {
    FILE *f = fopen(plik, "wb");
    for (int i = 0; i < n; i++) {
        fwrite(tab[i], sizeof(int), m, f);
    }
    fclose(f);
}

void odczytaj_c(const char *plik, int n, int m) {
    FILE *f = fopen(plik, "rb");
    int x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fread(&x, sizeof(int), 1, f);
            printf("%4d", x);
        }
        printf("\n");
    }
    fclose(f);
}

int main() {
    int n = 10, m = 10;
    int **tab = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }

    char nazwa[100];
    printf("Podaj nazwę pliku:\n");
    scanf("%s", nazwa);

    zapisz_c(nazwa, tab, n, m);
    printf("Zawartość pliku:\n");
    odczytaj_c(nazwa, n, m);

    for (int i = 0; i < n; i++) free(tab[i]);
    free(tab);
    return 0;
}
