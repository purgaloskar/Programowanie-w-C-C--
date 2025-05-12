#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
    const int wiersze = 5, kolumny = 5;
    int a[wiersze][kolumny], b[kolumny][wiersze];

    auto start1 = high_resolution_clock::now();

    for (int i = 0; i < wiersze; i++)
        for (int j = 0; j < kolumny; j++)
            a[i][j] = j + 1;

    for (int i = 0; i < wiersze; i++)
        for (int j = 0; j < kolumny; j++)
            b[j][i] = a[i][j];

    auto end1 = high_resolution_clock::now();

    cout << "Tablica po zamianie (tablice):\n";
    for (int i = 0; i < kolumny; i++) {
        for (int j = 0; j < wiersze; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }

    auto start2 = high_resolution_clock::now();

    vector<vector<int>> va(wiersze, vector<int>(kolumny));
    vector<vector<int>> vb(kolumny, vector<int>(wiersze));

    for (int i = 0; i < wiersze; i++)
        for (int j = 0; j < kolumny; j++)
            va[i][j] = j + 1;

    for (int i = 0; i < wiersze; i++)
        for (int j = 0; j < kolumny; j++)
            vb[j][i] = va[i][j];

    auto end2 = high_resolution_clock::now();

    cout << "Tablica po zamianie (vector):\n";
    for (int i = 0; i < kolumny; i++) {
        for (int j = 0; j < wiersze; j++)
            cout << vb[i][j] << " ";
        cout << endl;
    }

    auto duration1 = duration_cast<nanoseconds>(end1 - start1).count();
    auto duration2 = duration_cast<nanoseconds>(end2 - start2).count();

    cout << "Czas dla tablic: " << duration1 << " ns\n";
    cout << "Czas dla vector: " << duration2 << " ns\n";

    return 0;
}
