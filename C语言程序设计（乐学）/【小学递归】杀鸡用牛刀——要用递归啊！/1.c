#include <stdio.h>

int sum(int k, int n, int m) {
    if (k < n)return 0;
    return k + sum(k - 1, n, m);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("The sum from %d to %d is %d.\n", n, m, sum(m, n, m));
}