#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++)
            printf(" %2d", i * n + j);
        printf("\n");
    }
}
