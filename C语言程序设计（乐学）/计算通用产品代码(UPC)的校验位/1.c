#include<stdio.h>

int main() {
    char s[20] = { 0 };
    for (int i = 1; i <= 11; i++)
        scanf(" %c", &s[i]);
    int sum1 = s[1] + s[3] + s[5] + s[7] + s[9] + s[11] - 6 * '0';
    int sum2 = s[2] + s[4] + s[6] + s[8] + s[10] - 5 * '0';
    int sum = (sum1 * 3 + sum2 - 1) % 10;
    printf("%d\n", 9 - sum);
}
