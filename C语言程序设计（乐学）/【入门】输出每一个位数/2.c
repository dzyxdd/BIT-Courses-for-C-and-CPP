#include <stdio.h>

int main() {
    char c[5];
    scanf("%s", c);
    for (int i = 0; i < 4; i++)
        printf("%c\n", c[i]);
}