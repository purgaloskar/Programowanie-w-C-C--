#include <iostream>
using namespace std;

bool przestepny(int rok) {
    return (rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0);
}

int main() {
    cout << przestepny(2024) << endl;
    cout << przestepny(1900) << endl;
}

