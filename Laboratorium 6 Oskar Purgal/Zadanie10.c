#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    printf("Adres zmiennej a: %p\n", (void*)&a);

    for (int i = 0; i < 3; ++i) {
        int *wsk = (int*)malloc(sizeof(int));
        if (wsk != NULL) {
            *wsk = i;
            printf("Adres dynamicznej zmiennej: %p\n", (void*)wsk);
            free(wsk);
        }
    }
    return 0;
}
