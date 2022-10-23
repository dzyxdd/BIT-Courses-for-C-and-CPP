#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c)
            printf("equilateral triangle.\n");
        else if (a == b || b == c || c == a)
            printf("isoceles triangle.\n");
        else
            printf("triangle.\n");
    }
    else
        printf("non-triangle.\n");
    return 0;
}
