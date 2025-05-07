#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Argumenty traktowane jako wskaźnik do tablicy wskaźników:" << endl;
    for (int i = 0; i < argc; ++i) {
        cout << argv[i] << endl;
    }

    cout << "Argumenty traktowane jako wskaźnik do znaków:" << endl;
    for (int i = 0; i < argc; ++i) {
        char* p = argv[i];
        while (*p) {
            cout << *p;
            ++p;
        }
        cout << endl;
    }

    return 0;
}
