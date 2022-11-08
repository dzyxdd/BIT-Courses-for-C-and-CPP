#include<string>
#include<iostream>

int main() {
    std::string s1, s2;
    int cnt = 0, ans = 0;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    while (!s1.empty()) {
        if (s1.substr(0, s2.size()) == s2) {
            s1 = s1.substr(s2.size());
            cnt++;
        }

        else {
            s1 = s1.substr(1);
            ans = std::max(cnt, ans);
            cnt = 0;
        }
    }
    std::cout << std::max(cnt,ans)<< std::endl;
}