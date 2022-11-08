#include <stdio.h>

int my_gcd(int a, int b) {
    return b == 0 ? a : my_gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", my_gcd(a, b));
}