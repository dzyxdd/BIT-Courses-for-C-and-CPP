#include<stdio.h>

int main() {
    int y, m, d, pd = 0;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d", &y, &m, &d);
    if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) pd = 1;
    int num = 0;
    for (int i = 1900; i < y; i++)
        if ((i % 400 == 0) || (i % 100 != 0 && i % 4 == 0))
            num++;
    num += (y - 1900) * 365;
    if (pd == 1 && m > 2)
        num++;
    for (int i = 1; i < m; i++)
        num += a[i];
    num += d;
    printf("%d\n", num % 7);
}
