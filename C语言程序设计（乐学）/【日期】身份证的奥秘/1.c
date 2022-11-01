#include<stdio.h>
#include <string.h>


int w[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char y[] = "10X98765432";
int main() {
    int n;
    scanf("%d", &n);
    for (int t = 1; t <= n; t++) {
        char a[30] = { 0 };
        scanf("%s", a);
        size_t len = strlen(a);
        if (len == 15) {
            for (int i = 17; i >= 8; i--)a[i] = a[i - 2];
            if (a[14] == '9' && a[15] == '9' && (a[16] == '6' || a[16] == '7' || a[16] == '8' || a[16] == '9'))
                a[7] = '8';
            else a[7] = '9';
            a[6] = '1';
        }
        int sum = 0;
        for (int i = 0; i < 17; i++)
            sum += (a[i] - '0') * w[i];
        if (len == 15) {
            a[17] = y[sum % 11];
            a[18] = 0;
            printf("%s\n", a);
        }
        else if (len == 18) {
            if (y[sum % 11] == a[17])printf("Valid\n");
            else printf("Invalid\n");
        }
        else printf("Invalid\n");
    }
}