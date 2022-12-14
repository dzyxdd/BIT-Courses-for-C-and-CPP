#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;
    freopen(s.c_str(), "r", stdin);
    int T, n;
    std::cin >> T;
    while (T--) {
        std::cin >> n;
        std::vector <std::pair<int, int>> a(n);
        for (auto& v : a)
            std::cin >> v.first >> v.second;
        std::sort(a.begin(), a.end(),
                  [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                      if (a.second == b.second)return a.first < b.first;
                      return a.second > b.second;
                  });
        if (a.begin()->second < 100)
            std::cout << "This OJ is too easy for PQ Dashen!\n";
        else
            for (auto& v : a)
                if (v.second >= 100) std::cout << v.first << "\n";
                else break;
        if (T) std::cout << "\n";
    }
}