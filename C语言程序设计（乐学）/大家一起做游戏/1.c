#include<stdio.h>

int main() {
    int n, m, s = 0;
    scanf("%d%d", &n, &m);
    int visit[200] = {0};
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < m; i++) {
            if (++s > n)s = 1;
            if (visit[s])i--;
        }
        visit[s] = 1;
    }
    printf("The left child is NO %d.\n", s);
}