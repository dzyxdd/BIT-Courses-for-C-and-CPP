#include<stdio.h>

int main() {
    int n, k = 0;
    char s[70] = "";
    scanf("%d", &n);
    int a = n;
    while (a > 0) {
        s[k++] = (a & 1) + '0';
        a >>= 1;
    }
    for (int i = 0; i < k; i++) {
        if (s[i] != s[k - i - 1]) {
            puts("No.");
            return 0;
        }
    }
    printf("Yes!\n%d=%s\n", n, s);
}