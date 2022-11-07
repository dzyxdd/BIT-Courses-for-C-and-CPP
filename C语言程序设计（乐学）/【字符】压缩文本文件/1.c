#include <stdio.h>
#include <string.h>

char words[10005][85];
int sum = 0;

int strCmp(char* p, char* ws) {
    if (strlen(p) != strlen(ws))
        return 1;
    for (int k = 0; p[k] != '\0'; k++)
        if (p[k] != ws[k])
            return 1;
    return 0;
}

int wdfd(char* p) {
    for (int j = sum / 2; j < sum; j++)
        if (p[0] == words[j][0])
            if (!strCmp(p, words[j]))
                return j;
    for (int j = 0; j < sum / 2; j++)
        if (p[0] == words[j][0])
            if (!strCmp(p, words[j]))
                return j;
    return -1;
}

int main() {
    char word[85] = { 0 }, c;
    int count = 0;
    while ((c = getchar()) != EOF) {
        if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
            word[count++] = c;
            continue;
        }
        if (count) {
            int n = wdfd(word);
            if (n != -1)
                printf("%d", n + 1);
            else {
                printf("%s", word);
                strcpy(words[sum++], word);
            }
            memset(word, 0, sizeof word);
            count = 0;
        }
        putchar(c);
    }
}
