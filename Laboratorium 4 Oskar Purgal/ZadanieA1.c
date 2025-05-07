#include <stdio.h>
#include <math.h>

int main() {
    double x, alfa, y;
    printf("Podaj x: ");
    scanf("%lf", &x);
    printf("Podaj alfa (w radianach): ");
    scanf("%lf", &alfa);

    y = (sqrt(x * x + 7) / (2 * x)) - (x * x) + (sin(alfa) / fabs(x * x * x));

    printf("Wynik: y = %.6lf\n", y);
    return 0;
}

