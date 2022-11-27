#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::string name;
    int money, n, m;
    std::map<std::string, int>mp;
    std::cin >> n;
    std::vector<std::string>name_list(n);
    for (auto& v : name_list) {
        std::cin >> v;
        mp[v] = 0;
    }
    for (int i = 0; i < n; i++) {
        std::cin >> name >> money >> m;
        if (m) mp[name] -= money / m * m;
        for (int j = 0; j < m; j++) {
            std::cin >> name;
            mp[name] += money / m;
        }
    }
    for (auto v : name_list)
        std::cout << v << " " << mp[v] << "\n";
}
