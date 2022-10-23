#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num = n - 1900;
    for (int i = 1900; i <= n; i++)
        if ((i % 400 == 0) || (i % 100 != 0 && i % 4 == 0)) num++;
    int day = 13 - num;
    while (day <= 7) day += 7;
    printf("%d\n", day);
}