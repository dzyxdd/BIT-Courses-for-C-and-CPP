#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>

int main() {
    std::string a, b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    std::merge(a.begin(), a.end(), b.begin(), b.end(), std::ostream_iterator<char>(std::cout));
    std::endl(std::cout);
}