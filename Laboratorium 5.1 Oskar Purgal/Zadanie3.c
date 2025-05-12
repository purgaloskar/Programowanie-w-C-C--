#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int x, int *steps) {
    int left = 0, right = n - 1, mid;
    *steps = 0;
    while (left <= right) {
        (*steps)++;
        mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, a, b, i, x, steps, index;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &n);
    printf("Podaj zakres liczb od: ");
    scanf("%d", &a);
    printf("Do: ");
    scanf("%d", &b);

    int *arr = malloc(n * sizeof(int));
    srand(time(NULL));
    for (i = 0; i < n; i++)
        arr[i] = a + rand() % (b - a + 1);

    printf("Wylosowana tablica:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubbleSort(arr, n);

    printf("Posortowana tablica:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Podaj wartosc do wyszukania: ");
    scanf("%d", &x);

    index = binarySearch(arr, n, x, &steps);
    if (index != -1)
        printf("Wartosc znaleziona na indeksie %d w %d krokach.\n", index, steps);
    else
        printf("Wartosc nie znajduje sie w tablicy.\n");

    free(arr);
    return 0;
}
