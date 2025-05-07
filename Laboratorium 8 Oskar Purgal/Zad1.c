#include <stdio.h>

int main() {
    char nazwa[100];
    printf("Podaj nazwę pliku do odczytu:\n");
    scanf("%s", nazwa);
    FILE *file = fopen(nazwa, "r");
    if (!file) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }
    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }
    fclose(file);
    return 0;
}
