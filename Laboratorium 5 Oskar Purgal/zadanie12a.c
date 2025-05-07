#include <stdio.h>

int main() {
    int a[3][3], b[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = j + 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            b[j][i] = a[i][j];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}