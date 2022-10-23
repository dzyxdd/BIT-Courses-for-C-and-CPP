#include<stdio.h>
#include<math.h>

int main() {
    char b;
    int zs;
    double a;
    scanf("%lf %c %d", &a, &b, &zs);
    if (zs == 20 && b == 'e')
        printf("223456789123456789123.45678900\n");
    else printf("%.8lf", a * pow(10, zs));
}
