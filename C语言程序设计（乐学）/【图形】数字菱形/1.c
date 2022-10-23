#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("%-2d", n - j + 1);
        for (int j = n - i + 2; j <= n; j++)
            printf("%-2d", j);
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("%-2d", n - j + 1);
        for (int j = n - i + 2; j <= n; j++)
            printf("%-2d", j);
        printf("\n");
    }
}