#include<stdio.h>
#include<string.h>

int choose(int y) {
    switch (y) {
        case 0:
        case 1:
            return 1 - y;
        case 2:
            return 40;
        default:
            return 12 - y;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int q = 1; q <= n; q++) {
        char s[20];
        scanf("%s", s);
        int len, a[20];
        len = strlen(s);
        if (len == 18)
            for (int i = 0; i < len; i++)
                a[i] = s[i] - '0';
        else {
            for (int i = 0; i <= 5; i++)
                a[i] = s[i] - '0';
            for (int i = 8; i <= 17; i++)
                a[i] = s[i - 2] - '0';
            a[6] = 1;
            if (a[14] == 9 && a[15] == 9 && (a[16] == 6 || a[16] == 7 || a[16] == 8 || a[16] == 9)) a[7] = 8;
            else a[7] = 9;
        }
        int sum = a[0] * 7 + a[1] * 9 + a[2] * 10 + a[3] * 5 + a[4] * 8 + a[5] * 4 + a[6] * 2 + a[7] * 1 + a[8] * 6 +
                  a[9] * 3 + a[10] * 7 + a[11] * 9 + a[12] * 10 + a[13] * 5 + a[14] * 8 + a[15] * 4 + a[16] * 2;
        int Y = sum % 11;
        if (len == 15) {
            a[17] = choose(Y);
            for (int i = 0; i < 17; i++)
                printf("%d", a[i]);
            if (a[17] == 40)
                printf("X");
            else
                printf("%d", a[17]);
        } else {
            int pd = choose(Y);
            if (pd == a[17])
                printf("Valid");
            else
                printf("Invalid");
        }
        printf("\n");
    }
}
