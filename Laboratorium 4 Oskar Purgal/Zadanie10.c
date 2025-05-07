#include <stdio.h>

void showBits(unsigned char x) {
    for (int i = 7; i >= 0; i--) printf("%d", (x >> i) & 1);
    printf("\n");
}

int main() {
    unsigned char x = 1;
    for (int i = 0; i < 8; i++) {
        showBits(x);
        x <<= 1;
    }
    for (int i = 0; i < 8; i++) {
        showBits(x);
        x >>= 1;
    }
    return 0;
}

