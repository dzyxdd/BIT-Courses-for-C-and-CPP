#include<stdio.h>
#include<string.h>
#include<math.h>

char x[30], y[30];
long long a[31], b[31], suma[101], sumb[101];

void zh(char s[], long long t[]) {
    t[0] = strlen(s);
    for (int i = 0; i < t[0]; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            t[t[0] - i] = s[i] - '0';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            t[t[0] - i] = s[i] - 'A' + 10;
        else if (s[i] >= 'a' && s[i] <= 'z')
            t[t[0] - i] = s[i] - 'a' + 10;
    }
    return;
}

long long max(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    scanf("%s %s", x, y);
    zh(x, a);
    zh(y, b);
    long long maxna = -1, maxnb = -1;
    for (int i = 1; i <= a[0]; i++)
        maxna = max(a[i], maxna);
    maxna = max(maxna + 1, 2);
    for (int i = 1; i <= b[0]; i++)
        maxnb = max(b[i], maxnb);
    maxnb = max(maxnb + 1, 2);
    for (int i = maxna; i <= 36; i++) {
        for (int j = 1; j <= a[0]; j++)
            suma[i] += a[j] * pow(i, j - 1);
    }
    for (int i = maxnb; i <= 36; i++) {
        for (int j = 1; j <= b[0]; j++)
            sumb[i] += b[j] * pow(i, j - 1);
    }
    for (int i = maxna; i <= 36; i++)
        for (int j = maxnb; j <= 36; j++) {
            if (suma[i] == sumb[j] && i != j) {
                printf("%s (base %d) = %s (base %d)\n", x, i, y, j);
                return 0;
            }
        }
    printf("%s is not equal to %s in any base 2..36\n", x, y);
}
