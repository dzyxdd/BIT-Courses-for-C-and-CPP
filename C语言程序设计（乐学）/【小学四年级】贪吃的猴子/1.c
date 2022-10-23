#include<stdio.h>

int main() {
    int n, sum = 1;
    scanf("%d", &n);
    for (int i = n - 1; i >= 1; i--)
        sum = (sum + i) * 2;
    if (sum == 1)
        printf("The monkey got 1 peach in first day.\n");
    else
        printf("The monkey got %d peaches in first day.\n", sum);
}