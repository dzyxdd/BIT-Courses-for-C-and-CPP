#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c)
            printf("equilateral triangle.");
        else if (a == b || b == c || c == a)
            printf("isoceles triangle.");
        else
            printf("triangle.");
    } else
        printf("non-triangle.");
}