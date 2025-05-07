#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int los1[6], los2[6], los3[6], ok;

    for (int i = 0; i < 6; i++)
        los1[i] = rand() % 49 + 1;

    los2[0] = rand() % 49 + 1;
    for (int i = 1; i < 6; i++) {
        do {
            los2[i] = rand() % 49 + 1;
        } while (los2[i] == los2[i-1]);
    }

    for (int i = 0; i < 6; ) {
        int x = rand() % 49 + 1;
        ok = 1;
        for (int j = 0; j < i; j++)
            if (los3[j] == x) ok = 0;
        if (ok) los3[i++] = x;
    }

    for (int i = 0; i < 6; i++) printf("%d ", los1[i]); printf("\n");
    for (int i = 0; i < 6; i++) printf("%d ", los2[i]); printf("\n");
    for (int i = 0; i < 6; i++) printf("%d ", los3[i]); printf("\n");
    return 0;
}