#include<stdio.h>

int main() {
    int a, b;
    while (1) {
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0)
            break;
        else if (a < 1000 || b < 1000)
            printf("Error\n");
        else {
            int s = 0;
            for (int i = a; i <= b; i++) {
                if (i % 2 == 1) continue;
                int t1, t2, t3, t4;
                t1 = i / 1000;
                t2 = (i / 100) % 10;
                t3 = (i % 100) / 10;
                t4 = i % 10;
                if (t1 != t2 && t1 != t3 && t1 != t4 && t2 != t3 && t2 != t4 && t3 != t4) {
                    printf("%d  ", i);
                    s++;
                }
            }
            printf("\ncounter=%d\n", s);
        }
    }
}
