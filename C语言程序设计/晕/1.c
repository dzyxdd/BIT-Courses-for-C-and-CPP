#include<stdio.h>

int a[101][101];

int main() {
    int n, x, y;
    scanf("%d", &n);
    int tot = a[x = 0][y = 0] = 1;
    while (tot < n * n) {
        while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++tot;
        while (x + 1 < n && !a[x + 1][y]) a[++x][y] = ++tot;
        while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++tot;
        while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++tot;

    }
    for (x = 0; x < n; ++x) {
        for (y = 0; y < n; ++y)
            printf("%3d", a[x][y]);
        printf("\n");
    }
}
