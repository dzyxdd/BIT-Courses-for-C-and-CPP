#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min(int a, int b) {
    return a > b ? b : a;
}

char s[100010];
int a[100010];

int main() {
    int zs, ws = 0;
    scanf("%s %*c %d", s, &zs);
    int len = 0, pd = 0;
    int place = strlen(s);
    for (int i = 0; i < place; i++) {
        if (s[i] == '-') {
            printf("-");
            pd = 1;
            place -= 1;
        } else if (s[i] == '.')
            place = i - pd;
        else a[++len] = s[i] - '0';
    }
    zs = zs + place;

    if (zs <= 0) {
        printf("0.");
        for (int i = 1; i <= min(abs(zs), 8); i++) {
            printf("0");
            ws++;
        }
        for (int i = 1; i <= min(len, 8 - ws); i++)
            printf("%d", a[i]);
        for (int i = 1; i <= 8 - min(len + ws, 8); i++)
            printf("0");
        printf("\n");
    } else {
        for (int i = 1; i <= zs; i++)
            printf("%d", a[i]);
        printf(".");
        int syws = len - zs;
        if (syws > 0) {
            for (int i = zs + 1; i <= min(syws, 8) + zs; i++)
                printf("%d", a[i]);
            for (int i = 1; i <= 8 - min(syws, 8); i++)
                printf("0");
        } else printf("00000000");

        printf("\n");
    }
}