/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>

int countsub(char* str, char* ss);

main()
{
    char s1[1000] = { 0 }, s2[100] = { 0 };
    gets(s1);
    gets(s2);
    printf("%d\n", countsub(s1, s2));
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */

#include <string.h>
int countsub(char* str, char* ss) {
    size_t len1 = strlen(str), len2 = strlen(ss);
    int ptr = 0, cnt = 0, ans = 0;
    while (ptr < len1) {
        if (strstr(str + ptr, ss) == str + ptr) {
            ptr += len2;
            cnt++;
        }
        else {
            ptr++;
            if (ans < cnt)ans = cnt;
            cnt = 0;
        }
    }
    return ans < cnt ? cnt : ans;
}