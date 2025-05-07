#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Iteracja %d\n", i);
    }
    return 0;
}


//W C89 nie można deklarować zmiennej pętli for w sekcji sterującej.
//W C99 i nowszych wersjach (C11, C17, C23) deklaracja w for działa poprawnie.
//W starszych standardach (C89) trzeba deklarować i przed pętlą:
//int i;
//for (i = 0; i < 5; i++) { ... }
