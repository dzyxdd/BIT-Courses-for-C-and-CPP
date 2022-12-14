#include<stdio.h>

int b[12][12];

int main() {
    int n, x = 1, y = 1, tot;
    scanf("%d", &n);
    b[x][y] = 1;
    tot = 1;
    while (tot < n * n) {
        if (y + 1 <= n) {
            tot++;
            b[x][++y] = tot;
        }
        while (y - 1 > 0 && x + 1 <= n && !b[x + 1][y - 1]) {
            tot++;
            b[++x][--y] = tot;
        }
        if (x + 1 <= n) {
            tot++;
            b[++x][y] = tot;
        }
        while (y + 1 <= n && x - 1 > 0 && !b[x - 1][y + 1]) {
            tot++;
            b[--x][++y] = tot;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}