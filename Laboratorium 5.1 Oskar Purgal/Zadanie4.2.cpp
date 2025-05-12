#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pracownik {
    string imie;
    string nazwisko;
    string pesel;
    string adres;
    string telefon;
};

int main() {
    vector<Pracownik> pracownicy;
    int n;
    cout << "Podaj liczbe pracownikow: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        Pracownik p;
        cout << "Pracownik " << i + 1 << ":\n";
        cout << "Imie: ";
        getline(cin, p.imie);
        cout << "Nazwisko: ";
        getline(cin, p.nazwisko);
        cout << "PESEL: ";
        getline(cin, p.pesel);
        cout << "Adres: ";
        getline(cin, p.adres);
        cout << "Telefon: ";
        getline(cin, p.telefon);
        pracownicy.push_back(p);
    }

    cout << "\nDane pracownikow:\n";
    for (int i = 0; i < pracownicy.size(); i++) {
        cout << "Pracownik " << i + 1 << ":\n";
        cout << "Imie: " << pracownicy[i].imie << endl;
        cout << "Nazwisko: " << pracownicy[i].nazwisko << endl;
        cout << "PESEL: " << pracownicy[i].pesel << endl;
        cout << "Adres: " << pracownicy[i].adres << endl;
        cout << "Telefon: " << pracownicy[i].telefon << endl;
        cout << endl;
    }

    return 0;
}
