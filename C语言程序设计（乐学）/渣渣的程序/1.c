#include <stdbool.h>
#include<stdio.h>
#include <string.h>

char a[1010];

void print() {
    printf("    ");
}

int main() {
    int indent = 0, judgefor = 0;
    bool newline = false;
    while (scanf(" %[^\n]", a) != EOF) {
        int len = strlen(a);
        for (int i = 0; i < len; i++) {
            if (a[i] == '}')
                indent--;
            if (indent && newline)
                for (int i = 0; i < indent; i++)
                    print();
            newline = false;
            putchar(a[i]);
            if (a[i] == '{' || a[i] == '}') {
                newline = true; putchar('\n');
            }
            else if (judgefor == 0 && a[i] == ';') {
                newline = true; putchar('\n');
            }
            else if (i >= 2 && a[i] == '>' && a[i - 1] == 'h' && a[i - 2] == '.') {
                newline = true; putchar('\n');
            }
            else if (a[i] == ')' && a[i + 1] != ';' && a[i + 1] != ')' && !(a[i + 1] == ' ' && a[i + 2] == '?')) {
                newline = true; putchar('\n');
            }
            if (judgefor != 0 && a[i] == ';')
                judgefor--;
            if (i + 2 < len && a[i] == 'f' && a[i + 1] == 'o' && a[i + 2] == 'r')
                judgefor = 2;
            if (a[i] == '{')
                indent++;
        }
    }
}