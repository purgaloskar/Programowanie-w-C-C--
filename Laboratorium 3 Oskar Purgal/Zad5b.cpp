//Zad5b Oskar Purgal 24.03.2025r

#include <iostream>
#include <cstdio>

int main() {
    double sum1 = 0, sum2 = 0;

    for (int i = 1; i <= 100000000; ++i) sum1 += 1.0 / (i * i);
    for (int i = 100000000; i >= 1; --i) sum2 += 1.0 / (i * i);

    std::cout << "Suma (1 do 100000000): " << sum1 << "\n";
    std::printf("Suma (100000000 do 1): %.15f\n", sum2);
    
    return 0;
}
