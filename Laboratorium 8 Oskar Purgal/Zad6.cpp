#include <iostream>
#include <fstream>

int main() {
    std::ofstream out("kwadraty.txt");
    for (int i = 1; i <= 10; i++) {
        out << i * i << "\n";
    }
    out.close();

    std::ifstream in("kwadraty.txt");
    std::string line;
    std::cout << "Zawartość pliku:\n";
    while (std::getline(in, line)) {
        std::cout << line << "\n";
    }
    return 0;
}
