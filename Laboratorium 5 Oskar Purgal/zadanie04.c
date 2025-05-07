#include <stdio.h>

int main() {
    int tab[15] = {9, 4, 6, 2, 8, 3, 7, 1, 5, 0, 11, 13, 12, 10, 14};
    for (int i = 0; i < 14; i++) {
        int min = i;
        for (int j = i + 1; j < 15; j++)
            if (tab[j] < tab[min])
                min = j;
        int tmp = tab[i];
        tab[i] = tab[min];
        tab[min] = tmp;
    }
    for (int i = 0; i < 15; i++) printf("%d ", tab[i]);
    return 0;
}