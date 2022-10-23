#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n%d\n%d\n%d\n", a / 1000, a / 100 % 10, a / 10 % 10, a % 10);
}