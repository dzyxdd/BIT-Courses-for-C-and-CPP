#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("The sum from %d to %d is %d.\n", n, m, (n + m) * (m - n + 1) / 2);
}