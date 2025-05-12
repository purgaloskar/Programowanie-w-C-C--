#include <iostream>
#include <bitset>

using namespace std;

struct Dane {
    unsigned int w_zakresie : 1;
    unsigned int maska : 32;
    unsigned int adres_ip : 32;
};

int main() {
    Dane dane{};

    int wartosc = 7;
    dane.w_zakresie = ((wartosc > -3 && wartosc < 7) || (wartosc > 7 && wartosc < 21)) ? 1 : 0;
    cout << "w_zakresie: " << dane.w_zakresie << endl;

    dane.maska = 0xFFFFFF00;
    cout << "Maska (24 bity): 0x" << hex << dane.maska << dec << endl;

    dane.adres_ip = (192 << 24) | (168 << 16) | (0 << 8) | 130;
    cout << "Adres IP (192.168.0.130): 0x" << hex << dane.adres_ip << dec << endl;

    unsigned int numer_podsieci = dane.adres_ip & dane.maska;
    unsigned int host = dane.adres_ip & ~dane.maska;

    cout << "Numer podsieci: 0x" << hex << numer_podsieci << dec << endl;
    cout << "Host: 0x" << hex << host << dec << endl;

    return 0;
}
