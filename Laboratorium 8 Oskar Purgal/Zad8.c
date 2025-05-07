#include <stdio.h>

void kopiuj_c(FILE *src, FILE *dst, int pokaz_procenty) {
    fseek(src, 0, SEEK_END);
    long rozmiar = ftell(src);
    rewind(src);
    long przeczytane = 0;
    int c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dst);
        przeczytane++;
        if (pokaz_procenty)
            printf("\r%d%%", (int)(100.0 * przeczytane / rozmiar));
        else
            printf("\r%ld bajtów", przeczytane);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Użycie: %s plik_wej plik_wyj -p|-b\n", argv[0]);
        return 1;
    }

    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");
    if (!src || !dst) {
        printf("Nie można otworzyć pliku\n");
        return 1;
    }

    int procent = argv[3][1] == 'p';
    kopiuj_c(src, dst, procent);
    fclose(src);
    fclose(dst);
    return 0;
}
