#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5,6};
    int n = sizeof(tab)/sizeof(int);
    if (n % 2 == 0)
        printf("%d %d\n", tab[n/2 - 1], n/2 - 1);
    else
        printf("%d %d\n", tab[n/2], n/2);
    for (int i = 0; i < n/2; i++) {
        if (n % 2 == 0 && (i == n/2 - 1)) continue;
        int tmp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = tmp;
    }
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    return 0;
}