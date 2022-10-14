#include<stdio.h>

int main() {
    int n, m, a[10001] = {0};
    scanf("%d%d", &n, &m);
    a[1] = a[3 * n - 2] = m;
    for (int i = 2; i < n + (n + 1) / 2; i++) {
        a[i] = (a[i - 1] + 1) % 10;
        a[3 * n - 1 - i] = a[i];
    }
    for (int i = 1; i < 3 * n - 2; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[3 * n - 2]);
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++)
            printf("  ");
        printf("%d ", a[i]);
        for (int j = i + 1; j < 3 * n - 1 - i; j++)
            printf("  ");
        printf("%d\n", a[i]);
    }
    if (n != 1) {
        for (int i = 1; i < n; i++)
            printf("  ");
        for (int i = n; i < 2 * n - 1; i++)
            printf("%d ", a[i]);
        printf("%d\n", a[2 * n - 1]);
    }
}
