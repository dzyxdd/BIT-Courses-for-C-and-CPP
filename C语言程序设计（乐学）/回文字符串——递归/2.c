#include <stdio.h>
#include <string.h>

int main() {
    char a[100] = { 0 };
    scanf("%[^\n]", a);
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        if (a[i] != a[len - i - 1]) {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
}