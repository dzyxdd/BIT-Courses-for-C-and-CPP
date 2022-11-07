#include<stdio.h>

int a[100], b[100], maxPos = 0, n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) b[i] = b[i - 1];
        else b[i] = i;
        if (maxPos - b[maxPos] + 1 < i - b[i] + 1) maxPos = i;
    }
    if (maxPos == b[maxPos])printf("No equal number list.\n");
    else printf("The longest equal number list is from %d to %d.\n", b[maxPos], maxPos);
}