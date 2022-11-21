#include <algorithm>
#include <cstdio>
#include <vector>

std::vector<std::vector<int>> a(3, std::vector<int>(4, 0));

int main() {
    for (auto &row: a) {
        for (auto &v: row)
            scanf("%d", &v);
        std::sort(row.begin(), row.end());
    }
    for (auto &row: a) {
        for (auto &v: row)
            printf("%3d", v);
        printf("\n");
    }
}