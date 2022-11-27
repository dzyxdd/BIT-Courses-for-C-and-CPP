#include<stdio.h>

int calculate(int a, int b, char c) {
    switch (c) {
        case '+':return a + b;
        case '-':return a - b;
        case '*':return a * b;
        case '/':return a / b;
    }
}

int a[1000], ptr;
char s[3];

int main() {
    while (scanf("%s", s) != EOF) {
        if (s[0] >= '0' && s[0] <= '9') {
            sscanf(s, "%d", a + ptr);
            ptr++;
        } else {
            a[ptr - 2] = calculate(a[ptr - 2], a[ptr - 1], s[0]);
            ptr--;
        }
    }
    printf("%d\n", a[ptr - 1]);
}