#include <cstdio>
#include <string>
#include <map>

std::map<std::string, int>mp;

int main() {
    std::string s;
    for (char c = getchar(); c != EOF; c = getchar()) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))s += c;
        else {
            if (!s.empty()) {
                if (mp.find(s) != mp.end())
                    printf("%d", mp[s]);
                else {
                    const auto t = mp.size();
                    mp[s] = t + 1;
                    printf("%s", s.c_str());
                }
                s.clear();
            }
            putchar(c);
        }
    }
}
