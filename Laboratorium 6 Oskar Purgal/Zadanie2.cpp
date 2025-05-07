#include <iostream>
#include <cstring>

int main() {
    char* wskchar = new char[10];
    int* wskint = new int[3];

    std::cout << wskchar << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << wskint[i] << std::endl;
    }

    strcpy(wskchar, "Microsoft");
    wskint[0] = 10;
    wskint[1] = 20;
    wskint[2] = 30;

    std::cout << wskchar << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << wskint[i] << std::endl;
    }

    delete[] wskchar;
    delete[] wskint;

    return 0;
}
