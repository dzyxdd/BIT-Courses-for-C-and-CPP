#include <stdio.h>

int main() {
    int op;
    double t;
    scanf("%d %lf", &op, &t);
    if (op == 1)printf("The Centigrade is %.2f\n", (t - 32) * 5 / 9);
    else printf("The Fahrenheit is %.2f\n", t * 9 / 5 + 32);
}