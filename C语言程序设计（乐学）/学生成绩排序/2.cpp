#include <algorithm>
#include <cstdio>
#include <vector>

struct Student {
    char name[24];
    int score;
};

int main() {
    int n;
    scanf("%d%*c", &n);
    std::vector<Student>a(n);
    for (auto& v : a)
        scanf("%[^,]%*c%d%*c", v.name, &v.score);
    std::stable_sort(a.begin(), a.end(),
                     [](const Student& a, const Student& b) {
                         return a.score > b.score;
                     });
    for (auto& v : a)
        printf("%s,%d\n", v.name, v.score);
}