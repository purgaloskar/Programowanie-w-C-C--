#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, a, b, x, i, j, k, l, r, m, steps = 0;
    scanf("%d %d %d", &n, &a, &b);
    int tab[n];
    srand(time(0));
    for (i = 0; i < n; i++) {
        tab[i] = rand() % (b - a + 1) + a;
        printf("%d ", tab[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (tab[i] > tab[j]) {
                k = tab[i];
                tab[i] = tab[j];
                tab[j] = k;
            }
    for (i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
    scanf("%d", &x);
    l = 0;
    r = n - 1;
    while (l <= r) {
        steps++;
        m = (l + r) / 2;
        if (tab[m] == x) {
            printf("%d %d\n", m, steps);
            return 0;
        }
        if (tab[m] < x) l = m + 1;
        else r = m - 1;
    }
    printf("brak\n");
    return 0;
}