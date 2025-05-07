#include <iostream>
using namespace std;

void zamienWskazniki(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void zamienReferencje(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void zamienWskIRef(int* a, int& b) {
    int temp = *a;
    *a = b;
    b = temp;
}

int main() {
    int x = 2, y = 3;
    zamienWskazniki(&x, &y);
    cout << x << " " << y << endl;
    zamienReferencje(x, y);
    cout << x << " " << y << endl;
    zamienWskIRef(&x, y);
    cout << x << " " << y << endl;
}

