//Zad20 Oskar Purgal 24.03.2025r

#include <iostream>
#include <algorithm>

bool isPalindrome(std::string str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Podaj napis: ";
    std::getline(std::cin, input);
    
    if (isPalindrome(input)) std::cout << "To palindrom\n";
    else std::cout << "To nie palindrom\n";
    
    return 0;
}
