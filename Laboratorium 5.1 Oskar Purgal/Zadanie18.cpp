#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int x = 3, y = 3, z = 3;
    int tablica[x][y][z];
    int suma = 0;
    srand(time(0));

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < z; k++) {
                tablica[i][j][k] = rand() % 100;
                suma += tablica[i][j][k];
            }

    cout << "Suma wszystkich elementow: " << suma << endl;
    return 0;
}
