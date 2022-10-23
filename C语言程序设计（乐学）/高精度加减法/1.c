#include<stdio.h>

#include<string.h>

int a[10001], b[10001], c[10001], maxn;
char s[10001], fh, chae, s1[10001], s2[10001];

void zh(int a[], char str[]) {
    a[0] = strlen(str);
    for (int i = 1; i <= a[0]; i++)
        a[i] = str[a[0] - i] - '0';
}

int main() {
    int n;
    scanf("%d", &n);
    for (int qwe = 1; qwe <= n; qwe++) {
        int pd = 0;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        memset(s, 0, sizeof(s));
        memset(s1, 0, sizeof(s1));
        memset(s2, 0, sizeof(s2));
        int len = 0;
        while (scanf(" %c", &chae)) {
            if (chae < '0' || chae > '9')
                break;
            else {
                s[len] = chae;
                len++;
            }
        }
        fh = chae;
        strcpy(s1, s);
        memset(s, 0, sizeof(s));
        scanf("%s", s);
        strcpy(s2, s);
        if (strlen(s1) < strlen(s2) || (strlen(s1) == strlen(s2) && strcmp(s1, s2) < 0)) {
            pd = 1;
            memset(s, 0, sizeof(s));
            strcpy(s, s1);
            strcpy(s1, s2);
            strcpy(s2, s);
        }
        zh(a, s1);
        zh(b, s2);
        maxn = a[0] > b[0] ? a[0] : b[0];
        if (fh == '+') {
            for (int i = 1; i <= maxn; i++) {
                c[i] += a[i] + b[i];
                if (c[i] >= 10) {
                    c[i + 1]++;
                    c[i] -= 10;
                }
            }
            if (c[maxn + 1] != 0)
                maxn++;
        } else {
            for (int i = 1; i <= maxn; i++) {
                c[i] = a[i] - b[i];
                if (c[i] < 0) {
                    a[i + 1]--;
                    c[i] += 10;
                }
            }
            while (c[maxn] == 0 && maxn > 1)
                maxn--;
            if (pd == 1)
                printf("-");
        }
        for (int i = maxn; i >= 1; i--)
            printf("%d", c[i]);
        printf("\n");
    }
}
