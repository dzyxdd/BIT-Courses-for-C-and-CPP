#include<stdio.h>
#include<string.h>
/*不知道scanf的格式控制串中空格的用法时的做法*/
char t[10010];

int main() {
    gets(t);
    int a = 0, b = 0, i = 0, len = strlen(t);
    while (t[i] <= '9' && t[i] >= '0')
        a = a * 10 + (t[i++] - '0');
    while (i < len && t[i] == ' ')	i++;
    int fh = i; i++;
    while (i < len && t[i] == ' ')	i++;
    while (i < len && t[i] <= '9' && t[i] >= '0')
        b = b * 10 + (t[i++] - '0');
    switch (t[fh]) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        case '%':
            printf("%d\n", a % b);
            break;
    }
}