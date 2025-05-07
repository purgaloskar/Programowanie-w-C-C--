#include <iostream>
using namespace std;

void przesun(int t[], int n, int ile = 1, int kierunek = 1) {
    for (int k = 0; k < ile; k++) {
        if (kierunek == 1) {
            int temp = t[n - 1];
            for (int i = n - 1; i > 0; i--) t[i] = t[i - 1];
            t[0] = temp;
        } else {
            int temp = t[0];
            for (int i = 0; i < n - 1; i++) t[i] = t[i + 1];
            t[n - 1] = temp;
        }
    }
    for (int i = 0; i < n / 2; i++) {
        int tmp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = tmp;
    }
}

int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    przesun(tab, 5, 2, 1);
    for (int i = 0; i < 5; i++) cout << tab[i] << " ";
    cout << endl;
}

