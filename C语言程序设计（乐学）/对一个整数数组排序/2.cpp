#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (auto &v: a)std::cin >> v;
    std::sort(a.begin(), a.end());
    for (auto &v: a)std::cout << v << "\n";
}