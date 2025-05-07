#include <iostream>

int main() {
    char m[6] = {'C', 'i', 's', 'c', 'o', '\0'};
    char n[10] = "Microsoft";

    char* wsk = m;

    while (*wsk != '\0') {
        std::cout << *wsk;
        ++wsk;
    }

    std::cout << std::endl;
    return 0;
}
