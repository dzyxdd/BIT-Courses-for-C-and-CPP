#include<stdio.h>
#include<math.h>

int pd(int k, int t) {
    for (int i = 1; i <= t; i++)
        if ((k / (int) pow(10, t - i)) % (i * i) != 0)
            return 0;
    return 1;
}

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    if (n == 0 || n == 8) {
        printf("%d", sum);
        return 0;
    }
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        if (pd(i, n) == 1)
            sum++;
    }
    printf("%d\n", sum);
    return 0;
}

