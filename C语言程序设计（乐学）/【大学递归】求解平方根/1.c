#include <math.h>
#include <stdio.h>

double my_sqrt(double x, double p, double e) {
    if (fabs(p * p - x) < e)return p;
    return my_sqrt(x, 0.5 * (p + x / p), e);
}

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.8f\n", my_sqrt(a, a, b));
}