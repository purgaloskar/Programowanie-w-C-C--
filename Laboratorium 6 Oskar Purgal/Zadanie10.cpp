#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Adres zmiennej a: " << &a << endl;

    for (int i = 0; i < 3; ++i) {
        int* wsk = new int(i);
        cout << "Adres dynamicznej zmiennej: " << wsk << endl;
        delete wsk;
    }
    return 0;
}
