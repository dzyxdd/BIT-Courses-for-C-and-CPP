#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d%*c", &n);
    for (int i = 1; i <= n; i++) {
        char s[30] = {0};
        scanf("%[^\n]%*c", s);
        size_t len = strlen(s), cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        if (len < 6) {
            puts("Not Safe");
            continue;
        }
        for (int j = 0; j < len; j++) {
            if (s[j] >= '0' && s[j] <= '9')cnt1 = 1;
            else if (s[j] >= 'A' && s[j] <= 'Z')cnt2 = 1;
            else if (s[j] >= 'a' && s[j] <= 'z')cnt3 = 1;
            else cnt4 = 1;
        }
        switch (cnt1 + cnt2 + cnt3 + cnt4) {
            case 1:puts("Not Safe");break;
            case 2:puts("Medium Safe");break;
            default:puts("Safe");
        }
    }
}