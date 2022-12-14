#include <set>
#include <iostream>

int main() {
    int k;
    std::set<int>st;
    while (std::cin >> k) {
        if (k == 0)break;
        st.insert(k);
    }
    for (auto& v : st)
        std::cout << v << "\n";
}