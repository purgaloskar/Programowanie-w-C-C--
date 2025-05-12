#include <iostream>

using namespace std;

int main() {
    int arr[15];
    cout << "Podaj 15 liczb do posortowania:\n";
    for (int i = 0; i < 15; i++)
        cin >> arr[i];

    for (int i = 0; i < 14; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 15; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Posortowana tablica:\n";
    for (int i = 0; i < 15; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
