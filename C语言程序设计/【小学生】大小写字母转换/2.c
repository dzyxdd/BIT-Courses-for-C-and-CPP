#include<stdio.h>
//不知道ctype.h头文件的做法

int main() {
    char a;
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
        a += 32;
    else if (a >= 'a' && a <= 'z')
        a -= 32;
    printf("%c\n", a);
}