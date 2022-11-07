#include<stdio.h>
#include <string.h>

char a[110][110];
int b[110][110], n, m;

int main() {
    for (int t = 1;; t++) {
        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0)return 0;
        if (t != 1)puts("");
        printf("Field #%d:\n", t);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++) {
            scanf("%s", a[i] + 1);
            for (int j = 1; j <= m; j++)
                if (a[i][j] == '*')
                    for (int dx = -1; dx <= 1; dx++)
                        for (int dy = -1; dy <= 1; dy++)
                            b[i + dx][j + dy]++;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i][j] == '*')putchar('*');
                else printf("%d", b[i][j]);
            }
            puts("");
        }
    }
}