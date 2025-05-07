#include <iostream>

int main() {
    int a[][2] = { {1,2},{3,4},{5,6},{7,8},{9,10},{11,12} };
    char b[2][20] = { "Poniedzialek", "Wtorek" };
    char znaki[] = "Programowanie";

    int (*wsk_a)[2] = a;
    for (int i = 0; i < 6; ++i) {
        std::cout << *(*(wsk_a + i) + 0) << " ";
        std::cout << *(*(wsk_a + i) + 1) << std::endl;
    }

    char (*wsk_b)[20] = b;
    for (int i = 0; i < 2; ++i) {
        char* wsk = *(wsk_b + i);
        while (*wsk != '\0') {
            std::cout << *wsk;
            ++wsk;
        }
        std::cout << std::endl;
    }

    char* wsk_znaki = znaki;
    while (*wsk_znaki != '\0') {
        std::cout << *wsk_znaki;
        ++wsk_znaki;
    }
    std::cout << std::endl;

    return 0;
}
