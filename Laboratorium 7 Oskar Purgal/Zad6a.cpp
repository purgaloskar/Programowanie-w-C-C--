#include <iostream>
using namespace std;

struct IP {
    unsigned char a, b, c, d;
};

IP adresSieci(IP ip, IP maska) {
    IP wynik;
    wynik.a = ip.a & maska.a;
    wynik.b = ip.b & maska.b;
    wynik.c = ip.c & maska.c;
    wynik.d = ip.d & maska.d;
    return wynik;
}

int main() {
    IP ip = {192, 168, 1, 100};
    IP maska = {255, 255, 255, 0};
    IP siec = adresSieci(ip, maska);
    cout << (int)siec.a << "." << (int)siec.b << "." << (int)siec.c << "." << (int)siec.d << endl;
}

