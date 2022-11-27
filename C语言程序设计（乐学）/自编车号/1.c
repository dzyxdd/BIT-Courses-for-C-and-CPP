#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[10];
    scanf("%s", s);
    if (strlen(s) != 5 || !isdigit(s[4]))
        puts("no.");
    else {
        int cnt = 0, flag = 0;
        for (int i = 0; i < 5; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')cnt++;
            if (s[i] == 'O' || s[i] == 'I')flag++;
        }
        if (cnt != 2 || flag)puts("no.");
        else puts("ok.");
    }
}