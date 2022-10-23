#include<stdio.h>

int a[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,},
                {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
int b[2] = {365, 366};

int pd(int t) {
    if (t % 400 == 0 || (t % 4 == 0 && t % 100 != 0))return 1;
    return 0;
}

int num1(int m, int d, int judge) {
    for (int j = 1; j < m; j++)
        d += a[judge][j];
    return d;
}

void num2(int sum, int y) {
    for (; sum > b[pd(y)]; y++)
        sum -= b[pd(y)];
    int m;
    for (m = 1; sum > a[pd(y)][m]; m++)
        sum -= a[pd(y)][m];
    printf("%d.%d.%d\n", y, m, sum);
}

int main() {
    int y, m, d, n;
    scanf("%d%d%d%d", &y, &m, &d, &n);
    n += num1(m, d, pd(y));
    num2(n, y);
}
