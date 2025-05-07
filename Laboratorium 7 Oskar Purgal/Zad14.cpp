#include <iostream>
using namespace std;

int* wskret() {
    return new int;
}

int* wskret(int x) {
    int* p = new int;
    *p = x;
    return p;
}

int main() {
    int* a = wskret();
    *a = 7;
    cout << *a << endl;
    delete a;

    int* b = wskret(5);
    cout << *b << endl;
    delete b;
}

