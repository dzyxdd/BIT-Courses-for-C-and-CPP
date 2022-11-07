#include<stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    for (int i = 10000; i <= 30000; i++)
        if (i / 100 % k == 0 && i / 10 % 1000 % k == 0 && i % 1000 % k == 0)
            printf("%d\n", i);
}