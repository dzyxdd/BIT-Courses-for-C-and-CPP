#include <algorithm>
#include <string>
#include <iostream>

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::sort(s.begin(), s.end());
    std::cout << s << std::endl;
}