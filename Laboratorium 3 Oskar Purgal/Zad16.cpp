//Zad16 Oskar Purgal 24.03.2025r

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    while (true) {
        std::cout << "Podaj liczbę (0 kończy): ";
        std::cin >> guess;

        if (guess == 0) {
            std::cout << "Wylosowana liczba to: " << number << "\n";
            break;
        }

        if (guess > number) std::cout << "Za dużo!\n";
        else if (guess < number) std::cout << "Za mało!\n";
        else {
            std::cout << "Brawo! Zgadłeś!\n";
            break;
        }
    }

    return 0;
}
