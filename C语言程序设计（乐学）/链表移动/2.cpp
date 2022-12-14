#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    for (int i = m + 1; i <= n; i++)std::cout << i << " ";
    for (int i = 1; i <= m; i++)std::cout << i << " ";
    std::cout << "\n";
}