#include<stdio.h>

int main() {
    int a, n, sum = 1, pd = 0;
    scanf("%d%d", &a, &n);
    if (n == 0 || a > 150)
        printf("The last 3 numbers is 1.\n");
    else {
        for (int i = 1; i <= n; i++) {
            sum *= a;
            if (sum >= 1000) {
                sum %= 1000;
                pd = 1;
            }
        }
        sum %= 1000;
        if (pd == 0)
            printf("The last 3 numbers is %d.\n", sum);
        else
            printf("The last 3 numbers is %03d.\n", sum);
    }
}
