#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<vector<int>> macierz(10, vector<int>(10));
    int znak = 178;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            macierz[i][j] = (j == 0) ? i : (j == 1) ? i * i : znak;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (macierz[i][j] == znak)
                cout << setw(3) << (char)znak;
            else
                cout << setw(3) << macierz[i][j];
        }
        cout << endl;
    }

    return 0;
}
