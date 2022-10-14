#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= 10 * n; i++) {
        for (int j = 0; j <= (10 * n - i) * 2; j++) {
            int k = 100 * n - 10 * i - 5 * j;
            if (k * 18 == j * 15 && j * 15 == i * 20) {
                printf("%d,%d,%d\n", k, j, i);
                return 0;
            }
        }
    }
    printf("No change.\n");
}