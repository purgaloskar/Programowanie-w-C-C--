#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[10][10], suma = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tab[i][j] = rand() % 100;
    for (int i = 0; i < 10; i++) tab[i][i] = i;
    for (int i = 0; i < 10; i++) suma += tab[i][i];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%3d", tab[i][j]);
        printf("\n");
    }
    printf("%d\n", suma);
    return 0;
}