#include<stdio.h>

#define PAI  3.1415926

int main() {
    int r, h;
    double s, v;
    scanf("%d%d", &r, &h);
    s = 2 * PAI * r * h;
    v = PAI * r * r * h;
    printf("s=%.2f,v=%.2f\n", s, v);
    return 0;
}