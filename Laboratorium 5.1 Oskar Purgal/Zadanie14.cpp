#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    vector<vector<int>> macierz(10, vector<int>(10));
    int suma = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            macierz[i][j] = (j == 9 - i) ? i : rand() % 100;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            cout << setw(3) << macierz[i][j];
        cout << endl;
        suma += macierz[i][9 - i];
    }

    cout << "Suma elementow na przekatnej: " << suma << endl;
    return 0;
}
