#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void losowanie_z_powt(vector<int>& wyniki) {
    for (int i = 0; i < 6; i++)
        wyniki.push_back(rand() % 49 + 1);
}

void losowanie_z_powt_bez_sasiadow(vector<int>& wyniki) {
    int poprzednia = -1;
    for (int i = 0; i < 6; i++) {
        int liczba;
        do {
            liczba = rand() % 49 + 1;
        } while (liczba == poprzednia);
        wyniki.push_back(liczba);
        poprzednia = liczba;
    }
}

void losowanie_bez_powt(vector<int>& wyniki) {
    vector<int> liczby;
    for (int i = 1; i <= 49; i++)
        liczby.push_back(i);

    for (int i = 0; i < 6; i++) {
        int index = rand() % liczby.size();
        wyniki.push_back(liczby[index]);
        liczby.erase(liczby.begin() + index);
    }
}

void wyswietl(const vector<int>& wyniki) {
    for (int liczba : wyniki)
        cout << liczba << " ";
    cout << endl;
}

int main() {
    srand(time(0));
    vector<int> wyniki1, wyniki2, wyniki3;

    cout << "Losowanie 6 z 49 z powtorzeniami:\n";
    losowanie_z_powt(wyniki1);
    wyswietl(wyniki1);

    cout << "Losowanie 6 z 49 z powtorzeniami ale nie kolejno:\n";
    losowanie_z_powt_bez_sasiadow(wyniki2);
    wyswietl(wyniki2);

    cout << "Losowanie 6 z 49 bez powtorzen:\n";
    losowanie_bez_powt(wyniki3);
    wyswietl(wyniki3);

    return 0;
}
