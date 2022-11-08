#include <stdio.h>
#include <string.h>

int judge(char* a, int l, int r) {
    if (r <= l)return 1;
    if (a[l] == a[r])return judge(a, l + 1, r - 1);
    return 0;
}

int main() {
    char a[100] = { 0 };
    scanf("%[^\n]", a);
    printf(judge(a, 0, strlen(a) - 1) ? "Yes\n" : "No\n");
}