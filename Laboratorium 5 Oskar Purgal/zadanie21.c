#include <stdio.h>
#include <string.h>

int main() {
    char a[100] = "Ala ma ";
    char b[] = "kota";
    strcat(a, b);
    printf("%s\n", a);
    return 0;
}