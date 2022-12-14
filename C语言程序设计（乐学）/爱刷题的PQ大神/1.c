#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int id, level;
}Student;

Student a[100010];

int cmp(const void* a, const void* b) {
    Student* ta = (Student*) a;
    Student* tb = (Student*) b;
    if (ta->level == tb->level)return ta->id - tb->id;
    return tb->level - ta->level;
}

void solve(int n) {
    for (int i = 0; i < n; i++)
        scanf("%d%d", &a[i].id, &a[i].level);
    qsort(a, n, sizeof(Student), cmp);
    if (a[0].level < 100)printf("This OJ is too easy for PQ Dashen!\n");
    else {
        for (int i = 0; i < n; i++)
            if (a[i].level >= 100)printf("%d\n", a[i].id);
            else break;
    }

}

int main() {
    char fileName[20];
    scanf("%s", fileName);
    freopen(fileName, "r", stdin);
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        solve(n);
        if (T)printf("\n");
    }
}