#include <stdio.h>

int main() {
    int r = 15, n = -128, val = 11;
    printf("%d\n", r << 4);
    printf("%d\n", n >> 1);
    printf("%d\n", n << 1);
    printf("%d\n", (val & (1 << 2)) || (val & (1 << 3)));
    return 0;
}
