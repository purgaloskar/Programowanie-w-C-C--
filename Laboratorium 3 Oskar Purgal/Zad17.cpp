//Zad17 Oskar Purgal 24.03.2025r

#include <iostream>

int main() {
    int N, low = 1, high;
    std::cout << "Podaj N (zakres 1..N): ";
    std::cin >> N;
    high = N;

    while (low <= high) {
        int guess = (low + high) / 2;
        char response;
        std::cout << "Czy to " << guess << "? (t - tak, z - za dużo, m - za mało): ";
        std::cin >> response;

        if (response == 't') {
            std::cout << "Komputer zgadł liczbę!\n";
            break;
        }
        else if (response == 'z') high = guess - 1;
        else if (response == 'm') low = guess + 1;
    }

    return 0;
}
