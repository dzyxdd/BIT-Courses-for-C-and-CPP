#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    puts(a & 1 ? "No" : "Yes");
    //puts(a % 2 == 0 ? "No" : "Yes");
}