#include <stdio.h>
#include <math.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))
typedef struct Point {
    double x, y;
} Point;

double S(Point a, Point b, Point c) {
    return 0.5 * fabs(a.x * b.y + a.y * c.x + b.x * c.y - a.x * c.y - a.y * b.x - b.y * c.x);
}

Point a[110];

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        double maxn = 0.0;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%lf%lf", &a[i].x, &a[i].y);
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
                for (int k = j + 1; k <= n; k++)
                    maxn = max(S(a[i], a[j], a[k]), maxn);
        printf("%.1f\n", maxn);
    }
}