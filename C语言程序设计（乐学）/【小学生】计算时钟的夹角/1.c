#include<stdio.h>
#include<math.h>

int main() {
    int n, m;
    double x, y;
    scanf("%d%d", &n, &m);
    x = (n + m / 60.0) * 30.0;
    y = m * 6.0;
    double ang = fabs(x - y);
    ang = ang > 180 ? 360 - ang : ang;
    printf("At %d:%.2d the angle is %.1f degrees.\n", n, m, ang);
    return 0;
}
