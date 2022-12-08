#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double w, l, x0, y0, x1, y1;
    char str[1200];
    scanf("%lf%lf%lf%lf%lf%lf%s", &w, &l, &x0, &y0, &x1, &y1, str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'F')y0 = -y0;
        else if (str[i] == 'B')y0 = 2 * l - y0;
        else if (str[i] == 'L')x0 = -x0;
        else if (str[i] == 'R')x0 = 2 * w - x0;
    }
    double x = x1 - x0, y = y1 - y0;
    printf("%.4lf\n", sqrt(x * x + y * y));
}
