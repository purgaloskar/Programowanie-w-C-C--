#include <stdio.h>

int main() {
    int tab[10][10];
    for (int i = 0; i < 10; i++) {
        tab[i][0] = i;
        tab[i][1] = i * i;
        for (int j = 2; j < 10; j++)
            tab[i][j] = 178;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%3d", tab[i][j]);
        printf("\n");
    }
    return 0;
}