#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c, d, e;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    e = sqrt(fabs(d));
    if (a == 0 && b == 0)
        printf("Input error!\n");
    else if (a == 0 && b != 0 && c != 0)
        printf("x=%lf\n", -c / b);
    else if (a == 0 && b != 0 && c == 0)
        printf("x=0.000000\n");
    else if (a != 0 && b == 0 && d == 0)
        printf("x1=x2=%f\n", sqrt(fabs(-c / a)));
    else if (d == 0 && a != 0 && b != 0)
        printf("x1=x2=%f\n", -b / (2 * a));
    else if (d > 0 && a != 0)
        printf("x1=%f\nx2=%f\n", (-b + e) / (2 * a), (-b - e) / (2 * a));
    else if (d < 0 && a != 0 && b != 0)
        printf("x1=%f+%fi\nx2=%f-%fi\n", -b / (2 * a), e / (2 * a), -b / (a * 2), e / (2 * a));
    else if (d < 0 && a != 0 && b == 0)
        printf("x1=%fi\nx2=%fi\n", e / (2 * a), -e / (2 * a));
}
