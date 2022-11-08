#include<stdio.h>

int main() {
    int n;
    double ans = 1;
    scanf("%d", &n);
    if (n == 1)puts("1");
    else {
        for (int i = 2; i <= n; i++)
            ans += (i & 1 ? -1.0 : 1.0) / i;
        printf("%.6f\n", ans);
    }
}