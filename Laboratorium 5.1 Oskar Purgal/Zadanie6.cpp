#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;
    int arr[n];
    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n % 2 == 0) {
        int mid1 = n / 2 - 1;
        int mid2 = n / 2;
        cout << "Srodkowe elementy to: " << arr[mid1] << " (indeks " << mid1 << "), " << arr[mid2] << " (indeks " << mid2 << ")\n";
    } else {
        int mid = n / 2;
        cout << "Srodkowy element to: " << arr[mid] << " (indeks " << mid << ")\n";
    }

    for (int i = 0; i < n / 2; i++) {
        if (n % 2 == 0 && (i == n / 2 - 1))
            continue;
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Tablica po odwróceniu:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
