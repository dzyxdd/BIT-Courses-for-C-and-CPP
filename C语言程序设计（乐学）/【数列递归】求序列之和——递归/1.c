#include <stdio.h>

double f(int n) {
    if (n == 1)return 1;
    return (n & 1 ? -1.0 : 1.0) / n + f(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n != 1)printf("%.6f\n", f(n));
    else puts("1");
}