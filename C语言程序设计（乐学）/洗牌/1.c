#include <stdio.h>

int main() {
    int n, k = 1, cnt = 0;
    scanf("%d", &n);
    while (k != 1 || cnt == 0) {
        if (k <= n)k = 2 * k;
        else k = (k - n) * 2 - 1;
        cnt++;
    }
    printf("%d\n", cnt);
}