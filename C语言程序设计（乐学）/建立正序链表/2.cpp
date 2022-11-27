#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int>a;
    int n;
    while (1) {
        std::cin >> n;
        if (n == 0)break;
        a.push_back(n);
    }
    std::sort(a.begin(), a.end());
    for (auto& v : a)
        std::cout << v << "\n";
}