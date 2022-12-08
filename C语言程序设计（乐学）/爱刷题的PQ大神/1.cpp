#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Problem {
    int id, difficulty;
};

int T, n;

void solve() {
    std::cin >> n;
    std::vector<Problem>a(n);
    for (auto& v : a)
        std::cin >> v.id >> v.difficulty;
    std::sort(a.begin(), a.end(),
              [](const Problem& a, const Problem& b) {
                  if (a.difficulty == b.difficulty)return a.id < b.id;
                  return a.difficulty > b.difficulty;
              });
    if (a.begin()->difficulty < 100)
        std::cout << "This OJ is too easy for PQ Dashen!\n";
    else
        for (auto& v : a)
            if (v.difficulty >= 100)
                std::cout << v.id << "\n";
            else break;
}

int main() {
    std::string s;
    std::cin >> s;
    freopen(s.c_str(), "r", stdin);
    bool flag = false;
    std::cin >> T;
    while (T--) {
        if (flag == false)flag = true;
        else std::cout << '\n';
        solve();
    }
}