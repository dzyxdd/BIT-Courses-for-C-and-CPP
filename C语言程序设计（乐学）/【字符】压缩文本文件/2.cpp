#include <cstdio>
#include <string>

std::string word[10001];

int main() {
    std::string s;
    int sum = 0;
    for (char c = getchar(); c != EOF; c = getchar()) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))s += c;
        else {
            if (!s.empty()) {
                bool pd = false;
                for (int i = 1; i <= sum; i++)
                    if (s == word[i]) {
                        printf("%d", i);
                        pd = true;
                    }
                if (pd == 0) {
                    printf("%s", s.c_str());
                    word[++sum] = s;
                }
                s.clear();
            }
            putchar(c);
        }
    }
}
