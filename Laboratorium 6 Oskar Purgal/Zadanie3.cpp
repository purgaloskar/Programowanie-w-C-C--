#include <iostream>

int main() {
    char tab[10] = "Cisco";
    char* wsk = tab;

    while (*wsk != '\0') {
        std::cout << *wsk;
        ++wsk;
    }

    std::cout << std::endl;
    return 0;
}
