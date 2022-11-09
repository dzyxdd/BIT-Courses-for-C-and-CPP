#include <stdio.h>

int a[2][13] = {{365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                {366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
char s[10][20] = {"3 and 8.", "4 and 9.", "5 and 0.", "1 and 6.", "2 and 7."};

int judge(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int dis(int y, int m, int d) {
    for (int i = 1900; i < y; i++)
        d += a[judge(i)][0];
    for (int i = 1; i < m; i++)
        d += a[judge(y)][i];
    return d;
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    int n = dis(y, m, d) - dis(2012, 4, 8);
    if (n % 7 == 0 || n % 7 == 6)puts("Free.");
    else puts(s[(n % 7 + 5 - n / 91 % 5 - 1) % 5]);
}