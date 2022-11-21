#include <stdio.h>

typedef struct Student {
    char name[24];
    int score;
} Student;
Student a[100];

int main() {
    int n;
    scanf("%d%*c", &n);
    for (int i = 0; i < n; i++)
        scanf("%[^,]%*c%d%*c", a[i].name, &a[i].score);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j].score < a[j + 1].score) {
                Student temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    for (int i = 0; i < n; i++)
        printf("%s,%d\n", a[i].name, a[i].score);
}