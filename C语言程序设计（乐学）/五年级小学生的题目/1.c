#include<stdio.h>

char s[100];

void print(int max_num, int min_num, int result, char op) {
    if (max_num < 0)printf("(%d) %c (%d) = %d\n", max_num, op, min_num, result);
    else if (min_num < 0)printf("%d %c (%d) = %d\n", max_num, op, min_num, result);
    else printf("%d %c %d = %d\n", max_num, op, min_num, result);
}

int main() {
    scanf("%s", s);
    int maxn = 0x80000000, minn = 0x7fffffff, t;
    while (s[2] != '=') {
        sscanf(s, "%d,%s", &t, s);
        if (t > maxn)maxn = t;
        if (t < minn)minn = t;
    }
    switch (s[0]) {
        case '+':print(maxn, minn, maxn + minn, s[0]); break;
        case '-':print(maxn, minn, maxn - minn, s[0]); break;
        case '*':print(maxn, minn, maxn * minn, s[0]); break;
        case '/':print(maxn, minn, maxn / minn, s[0]); break;
        case '%':print(maxn, minn, maxn % minn, s[0]); break;
    }
}