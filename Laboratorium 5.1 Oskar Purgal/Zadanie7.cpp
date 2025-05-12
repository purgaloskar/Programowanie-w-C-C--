#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int serie;
    cout << "Podaj liczbe serii losowan: ";
    cin >> serie;

    srand(time(0));

    for (int s = 1; s <= serie; s++) {
        int zero = 0, tysiac = 0, parzyste = 0, nieparzyste = 0, podzielne3 = 0;
        long long sumaParzystych = 0, sumaNieparzystych = 0;

        for (int i = 0; i < 10000; i++) {
            int liczba = rand() % 1001;
            if (liczba == 0) zero++;
            if (liczba == 1000) tysiac++;
            if (liczba % 2 == 0) {
                parzyste++;
                sumaParzystych += liczba;
            } else {
                nieparzyste++;
                sumaNieparzystych += liczba;
            }
            if (liczba % 3 == 0) podzielne3++;
        }

        cout << "Seria " << s << ":\n";
        cout << "Zer: " << zero << endl;
        cout << "Wartosci 1000: " << tysiac << endl;
        cout << "Parzyste: " << parzyste << ", Suma: " << sumaParzystych << endl;
        cout << "Nieparzyste: " << nieparzyste << ", Suma: " << sumaNieparzystych << endl;
        cout << "Podzielne przez 3: " << podzielne3 << endl;
        cout << endl;
    }

    return 0;
}
