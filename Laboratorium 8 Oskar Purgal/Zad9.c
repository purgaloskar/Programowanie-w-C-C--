#include <stdio.h>

void kopiuj_binarnie_c(const char *srcname, const char *dstname, int procenty) {
    FILE *src = fopen(srcname, "rb");
    FILE *dst = fopen(dstname, "wb");
    if (!src || !dst) {
        printf("Nie można otworzyć plików\n");
        return;
    }

    fseek(src, 0, SEEK_END);
    long rozmiar = ftell(src);
    rewind(src);

    long przeczytane = 0;
    int c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dst);
        przeczytane++;
        if (procenty)
            printf("\r%d%%", (int)(100.0 * przeczytane / rozmiar));
        else
            printf("\r%ld bajtów", przeczytane);
    }
    printf("\n");

    fclose(src);
    fclose(dst);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Użycie: %s plik_wej plik_wyj -p|-b\n", argv[0]);
        return 1;
    }

    int procent = argv[3][1] == 'p';
    kopiuj_binarnie_c(argv[1], argv[2], procent);
    return 0;
}
