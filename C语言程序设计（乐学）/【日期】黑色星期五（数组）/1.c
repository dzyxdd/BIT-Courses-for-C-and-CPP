#include<stdio.h>

int main() {
    int n, day = 1, sum = 0, a[367] = {0};
    int b[2][13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334,
                    0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
    scanf("%d", &n);
    int pd = (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0));
    for (int i = 1900; i < n; i++)
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            day += 2;
        else
            day++;
    day %= 7;
    for (int i = 1; i <= pd + 365; i++) {
        a[i] = day;
        day = (day + 1) % 7;
    }
    for (int i = 1; i <= 12; i++) {
        if (a[b[pd][i] + 13] == 5)
            sum++;
    }
    if (sum == 0)
        printf("There is 0 Black Friday in year %d.\n", n);
    else if (sum == 1) {
        printf("There is 1 Black Friday in year %d.\n", n);
        printf("It is:\n");
        for (int i = 1; i <= 12; i++) {
            if (a[b[pd][i] + 13] == 5) {
                printf("%d/%d/13\n", n, i);
                break;
            }
        }
    } else {
        printf("There are %d Black Fridays in year %d.\n", sum, n);
        printf("They are:\n");
        for (int i = 1; i <= 12; i++)
            if (a[b[pd][i] + 13] == 5)
                printf("%d/%d/13\n", n, i);
    }
    return 0;
}
