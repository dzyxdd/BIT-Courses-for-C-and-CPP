#include<stdio.h>

int main() {
    int y, m, d, pd = 0;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d", &y, &m, &d);
    if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0))
        pd = 1;
    if (m > 12 || m < 1)
        printf("month is error.\n");
    else if ((d < 1) || (pd == 1 && m == 2 && d > 29) || (pd != 1 && a[m] < d) || (pd == 1 && m != 2 && a[m] < d))
        printf("day is error.\n");
    else {
        if (m < 3) {
            m += 12;
            y--;
        }
        int w = ((d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7 + 1) % 7;
        printf("%d\n", w);
    }
}
