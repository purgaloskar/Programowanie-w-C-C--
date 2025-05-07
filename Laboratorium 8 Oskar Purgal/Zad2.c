#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Użycie: %s <plik> [min2]\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    int znaki = 0, male = 0, duze = 0, wyrazy = 0, dl = 0;
    int tryb_min2 = argc > 2 && strcmp(argv[2], "min2") == 0;
    int c;

    while ((c = fgetc(file)) != EOF) {
        znaki++;
        if (islower(c)) male++;
        if (isupper(c)) duze++;
        if (isspace(c) || ispunct(c)) {
            if ((tryb_min2 && dl >= 2) || (!tryb_min2 && dl > 0)) wyrazy++;
            dl = 0;
        } else {
            dl++;
        }
    }
    if ((tryb_min2 && dl >= 2) || (!tryb_min2 && dl > 0)) wyrazy++;

    fclose(file);
    printf("Znaków: %d\nMałych liter: %d\nDużych liter: %d\nWyrazów: %d\n", znaki, male, duze, wyrazy);
    return 0;
}
