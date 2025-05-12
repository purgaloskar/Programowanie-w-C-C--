#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    int macierz[10][10], suma = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            macierz[i][j] = (i == j) ? i : rand() % 100;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            cout << setw(3) << macierz[i][j];
        cout << endl;
        suma += macierz[i][i];
    }

    cout << "Suma elementow na przekatnej: " << suma << endl;
    return 0;
}
