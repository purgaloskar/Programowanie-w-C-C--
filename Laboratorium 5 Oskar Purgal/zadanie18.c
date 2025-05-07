#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[3][3][3], suma = 0;
    srand(time(0));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++) {
                tab[i][j][k] = rand() % 10;
                suma += tab[i][j][k];
            }
    printf("%d\n", suma);
    return 0;
}