#include <iostream>
#include <cctype>
using namespace std;

bool bcdOK(const char* s) {
    for (int i = 0; s[i]; i++) {
        char c = toupper(s[i]);
        if (!(c >= '0' && c <= '9') && !(c >= 'A' && c <= 'F')) return false;
    }
    return true;
}

int main() {
    cout << bcdOK("absgdfsr") << endl;
    cout << bcdOK("1F3B") << endl;
}

