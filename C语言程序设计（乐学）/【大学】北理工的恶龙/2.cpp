#include<algorithm>
#include<iostream>

int n, m, a[100010], b[100010];

int main() {
    std::cin >> n >> m;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    for (int i = 0; i < m; i++)
        std::cin >> b[i];
    std::sort(a, a + n);
    std::sort(b, b + m);
    int zz = 0, sum = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] >= a[zz]) {
            zz++;
            sum += b[i];
            if (zz == n) {
                std::cout << sum << "\n";
                return 0;
            }
        }
    }
    std::cout << "bit is doomed!\n";
}
