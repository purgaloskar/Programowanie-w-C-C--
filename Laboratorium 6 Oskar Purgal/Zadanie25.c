#include <stdio.h>
#include <stdlib.h>

int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    int *wsk = (int*)malloc(5 * sizeof(int));

    printf("Tablica:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Zaalokowana pamięć (przed przepisaniem):\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(wsk + i));
    }
    printf("\n");

    for (int i = 0; i < 5; ++i) {
        *(wsk + i) = tab[i];
    }

    printf("Zaalokowana pamięć (po przepisaniu):\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(wsk + i));
    }
    printf("\n");

    for (int i = 0; i < 5; ++i) {
        (*(wsk + i))++;
    }

    printf("Zaalokowana pamięć (po zwiększeniu wartości):\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(wsk + i));
    }
    printf("\n");

    free(wsk);
    return 0;
}
