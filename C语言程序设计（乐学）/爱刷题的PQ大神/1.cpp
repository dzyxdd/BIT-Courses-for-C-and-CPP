#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>

struct Problem {
    std::string id;
    int difficulty;
};

Problem a[1010];
int T, n;

void solve() {
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        std::cin >> a[i].id >> a[i].difficulty;
    std::sort(a + 1, a + n + 1,
    [](const Problem& a, const Problem& b) {
        if (a.difficulty == b.difficulty)return a.id < b.id;
        return a.difficulty > b.difficulty;
    });
    if (a[1].difficulty < 100)
        std::cout << "This OJ is too easy for PQ Dashen!\n";
    else
        for (int i = 1; i <= n; i++)
            if (a[i].difficulty >= 100)
                std::cout << a[i].id << '\n';
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