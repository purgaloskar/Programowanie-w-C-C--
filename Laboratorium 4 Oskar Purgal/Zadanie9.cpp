#include <iostream>
using namespace std;

int main() {
    int arr[100], n, result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i], result ^= arr[i];
    cout << result << endl;
    return 0;
}
