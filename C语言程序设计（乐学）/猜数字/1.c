#include<stdio.h>

int main() {
    int n = 0, k;
    while (scanf("%d", &k)) {
        if (k == 0)break;
        n += 1 << (k - 1);
    }
    printf("%d\n", n);
}