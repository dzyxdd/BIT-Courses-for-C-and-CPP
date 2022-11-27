#include <string.h>
#include <stdio.h>

typedef struct Person {
    char name[40];
    int money;
}Person;
Person a[1010];

void change(char* s, int cnt, int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(s, a[i].name) == 0) {
            a[i].money += cnt;
            break;
        }
    }
}

int main() {
    int n, money, m;
    char name[40];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i].name);
        a[i].money = 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%s%d%d", name, &money, &m);
        if (m) change(name, -money / m * m, n);
        for (int j = 0; j < m; j++) {
            scanf("%s", name);
            change(name, money / m, n);
        }
    }
    for (int i = 0; i < n; i++)
        printf("%s %d\n", a[i].name, a[i].money);
}
