#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    for (int s = 0; s < 20; s++) {
        int zera = 0, tys = 0, parz = 0, niep = 0, pod3 = 0, sumparz = 0, sumniep = 0;
        for (int i = 0; i < 10000; i++) {
            int x = rand() % 1001;
            if (x == 0) zera++;
            if (x == 1000) tys++;
            if (x % 2 == 0) { parz++; sumparz += x; }
            else { niep++; sumniep += x; }
            if (x % 3 == 0) pod3++;
        }
        printf("%2d %4d %4d %5d %5d %5d %7d %7d\n", s+1, zera, tys, parz, niep, pod3, sumparz, sumniep);
    }
    return 0;
}