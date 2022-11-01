#include<stdio.h>

int main() {
    int n, k = 0, t = 0;
    char s[40] = "";
    scanf("%d", &n);
    int a = n;
    while (a > 0) {
        s[k++] = (a & 1) + '0';
        t <<= 1;
        t += a & 1;
        a >>= 1;
    }
    if (t == n)printf("Yes!\n%d=%s\n", n, s);
    else puts("No.");
}