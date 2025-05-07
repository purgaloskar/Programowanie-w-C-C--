#include <stdio.h>

int main() {
    unsigned char x = 0b00001011;
    x &= ~1;
    printf("%hhX\n", x);
    x |= (1 << 7);
    printf("%hhX\n", x);
    x |= (1 << 2);
    printf("%hhX\n", x);
    printf("%d\n", (x & (1 << 4)) != 0);
    printf("%d\n", (x & (1 << 5)) || (x & (1 << 6)));
    x ^= (1 << 3);
    printf("%hhX\n", x);
    x ^= (1 << 3);
    printf("%hhX\n", x);
    printf("%hhX\n", x << 2);
    return 0;
}
