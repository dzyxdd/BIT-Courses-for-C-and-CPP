#include <stdio.h>

const double pi = 3.1415926;

int main() {
    double r, h;
    scanf("%lf%lf", &r, &h);
    printf("s=%.2f,v=%.2f\n", 2.0 * pi * r * h, pi * r * r * h);
}