#include <stdio.h>
#include <string.h>
#include <stdbool.h>

long long a[20][30];
char s[20];
int n;

int main() {
    for (int i = 0; i < 26; i++) {
        a[0][i] = i + 1ll;
    }
    for (int i = 1; i < 10; i++) {
        a[i][0] = a[i - 1][25] + 1;
        for (int j = 1; j < 26 - i; j++) {
            a[i][j] = a[i][j - 1] + (a[i - 1][25] - a[i - 1][j]) + 1;
        }
        for (int j = 26 - i; j < 26; j++) {
            a[i][j] = a[i][j - 1];
        }
    }
    scanf("%d", &n);
    for (int t = 1; t <= n; t++) {
        scanf("%s", s);
        long long ans = 0;
        bool flag = false;
        for (int i = 1; i < strlen(s); i++) {
            if (s[i] <= s[i - 1]) {
                flag = true;
                printf("%lld\n", ans);
                break;
            }
        }
        if (flag == true)continue;
        for (int i = 0; i < strlen(s) - 1; i++) {
            char *p = s + i;
            ans += a[strlen(p) - 1][p[0] - 'a'];
            if (strlen(p) >= 1)
                ans -= a[strlen(p) - 2][p[0] - 'a' + 1];
        }
        ans += a[0][s[strlen(s) - 1] - 'a'];
        printf("%lld\n", ans);
    }
}