#include <algorithm>
#include <string>
#include <iostream>
#include <iterator>

int main() {
    std::string s, t;
    std::getline(std::cin, s);
    std::getline(std::cin, t);
    std::merge(s.begin(), s.end(), t.begin(), t.end(), std::ostream_iterator<char>(std::cout));
    std::cout << std::endl;
}