#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x = 8.387464;
    double alpha_deg = 26.0;
    double alpha_rad = alpha_deg * M_PI / 180.0;
    double y = (sqrt(x * x + 7) / (2 * x)) - (x * x) + (sin(alpha_rad) / (x * x));

    cout << "Wynik: " << fixed << setprecision(4) << y << endl;
    return 0;
}

