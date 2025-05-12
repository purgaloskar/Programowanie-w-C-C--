#include <stdio.h>

int main() {
    char napis1[200], napis2[100];
    printf("Podaj pierwszy napis: ");
    fgets(napis1, sizeof(napis1), stdin);
    printf("Podaj drugi napis: ");
    fgets(napis2, sizeof(napis2), stdin);

    for (int i = 0; napis1[i] != '\0'; i++)
        if (napis1[i] == '\n')
            napis1[i] = '\0';
    for (int i = 0; napis2[i] != '\0'; i++)
        if (napis2[i] == '\n')
            napis2[i] = '\0';

    int i = 0;
    while (napis1[i] != '\0')
        i++;
    int j = 0;
    while (napis2[j] != '\0') {
        napis1[i] = napis2[j];
        i++;
        j++;
    }
    napis1[i] = '\0';

    printf("Polaczony napis: %s\n", napis1);
    return 0;
}
