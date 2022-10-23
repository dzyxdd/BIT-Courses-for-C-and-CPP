#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a, const void *b) {
    return *(char *) b - *(char *) a;
}

char a[100010];

int main() {
    scanf("%s", a);
    qsort(a, strlen(a), sizeof(char), cmp);
    printf("%s\n", a);
}