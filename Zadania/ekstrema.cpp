#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(double x) {
    return (1 - x) * (x + 2) * x * x * x * x * x + x;
}

int main() {
    double a, b, krok;
    cout << "Podaj zakres od a do b oraz krok (np. -3 2 0.01): ";
    cin >> a >> b >> krok;

    ofstream wykres("wykres.csv");
    ofstream info("informacje.txt");
    ofstream binarny("wykres_binarny.bin", ios::binary);

    wykres << "x,y\n";
    info << "Funkcja: (1-x)(x+2)(x^3)(x^2)+x\n";
    info << fixed << setprecision(5);
    info << "Zakres: " << a << " do " << b << ", krok: " << krok << "\n";
    info << "Ekstrema:\n";

    double x1 = a, x2 = a + krok, x3 = x2 + krok;
    double y1 = f(x1), y2 = f(x2), y3;

    wykres << x1 << "," << y1 << "\n";
    wykres << x2 << "," << y2 << "\n";

    float bx, by, be;

    for (; x3 <= b; x1 = x2, y1 = y2, x2 = x3, y2 = y3, x3 += krok) {
        y3 = f(x3);
        wykres << x3 << "," << y3 << "\n";

        int typ = 0;
        if (y1 < y2 && y3 < y2) typ = 1;
        if (y1 > y2 && y3 > y2) typ = -1;

        if (typ != 0) {
            info << "x=" << x2 << ", y=" << y2 << ", ";
            if (typ == 1) info << "lokalne maksimum\n";
            if (typ == -1) info << "lokalne minimum\n";
        }

        bx = (float)x2;
        by = (float)y2;
        be = (float)typ;
        binarny.write((char*)&bx, sizeof(float));
        binarny.write((char*)&by, sizeof(float));
        binarny.write((char*)&be, sizeof(float));
    }

    wykres.close();
    info.close();
    binarny.close();

    cout << "Gotowe. Wygenerowano pliki: wykres.csv, informacje.txt, wykres_binarny.bin\n";
    return 0;
}
