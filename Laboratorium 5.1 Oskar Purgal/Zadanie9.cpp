#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Podaj ile liczb wylosowac: ";
    cin >> n;
    vector<int> liczby;
    srand(time(0));

    for (int i = 0; i < n; i++)
        liczby.push_back(rand() % 100);

    cout << "Wylosowane liczby:\n";
    for (int x : liczby)
        cout << x << " ";
    cout << endl;

    cout << "Powtarzajace sie liczby:\n";
    for (int i = 0; i < liczby.size(); i++) {
        bool powtorzona = false;
        for (int j = 0; j < i; j++) {
            if (liczby[i] == liczby[j]) {
                powtorzona = true;
                break;
            }
        }
        if (powtorzona)
            continue;
        for (int j = i + 1; j < liczby.size(); j++) {
            if (liczby[i] == liczby[j]) {
                cout << liczby[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}
