#include<stdio.h>

int main() {
    int h;
    scanf("%d", &h);
    for (int i = 1; i <= 2 * h - 1; i++)
        printf("*");
    printf("\n");
    for (int i = h - 1; i >= 1; i--) {
        for (int j = 1; j <= h - i; j++)
            printf(" ");
        printf("*");
        for (int j = 1; j <= 2 * i - 3; j++)
            printf(" ");
        if (i != 1)
            printf("*\n");
    }
    if (h != 1)
        printf("\n");
}