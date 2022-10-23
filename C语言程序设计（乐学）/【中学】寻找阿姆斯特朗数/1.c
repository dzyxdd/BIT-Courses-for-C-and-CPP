#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    int pd = 0;
    for (int t = pow(10, n - 1); t < pow(10, n); t++) {
        int k = t, sum = 0;
        for (int i = 1; i <= 6; i++) {
            sum += pow(k % 10, n);
            k /= 10;
        }
        if (sum == t) {
            printf("%d\n", sum);
            pd = 1;
        }
    }
    if (pd == 0)
        printf("No output.\n");
}