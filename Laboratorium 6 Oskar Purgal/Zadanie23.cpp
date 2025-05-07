#include <iostream>
using namespace std;

int main() {
    int tab[5] = {0};
    int* wsk = tab;
    int* wsk_tab[10] = {tab};

    tab[0] = 1;
    *(wsk + 1) = 2;
    *(tab + 2) = 3;

    for (int i = 0; i < 5; ++i) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
