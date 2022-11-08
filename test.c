#include<stdio.h>

int Cutoff = 5;

int median[10010], cnt = 0, a[10010];

void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int median3(int a[], int l, int r) {
    int mid = (l + r) >> 1;
    if (a[l] > a[mid])
        swap(&a[l], &a[mid]);
    if (a[l] > a[r])
        swap(&a[l], &a[r]);
    if (a[mid] > a[r])
        swap(&a[mid], &a[r]);
    swap(&a[mid], &a[r - 1]);
    median[cnt++] = a[r - 1];
    return a[r - 1];
}

void insertionsort(int a[], int n) {
    for (int p = 1; p < n; p++) {
        int temp = a[p], j;
        for (j = p; j > 0 && a[j - 1] > temp; j--)
            a[j] = a[j - 1];
        a[j] = temp;
    }
}

void Qsort(int a[], int l, int r) {
    int i, j, p;
    if (l + Cutoff <= r) {
        p = median3(a, l, r);
        i = l; j = r - 1;
        while (1) {
            while (a[++i] < p);
            while (a[--j] > p);
            if (i < j)swap(&a[i], &a[j]);
            else break;
        }
        swap(&a[i], &a[r - 1]);
        Qsort(a, l, i - 1);
        Qsort(a, i + 1, r);
    }
    else {
        insertionsort(a + l, r - l + 1);
    }
}

void quicksort(int a[], int n) {
    Qsort(a, 0, n - 1);
}


int main() {
    int n = 0, t;
    while (scanf("%d", &t) == 1) {
        a[n++] = t;
    }
    quicksort(a, n);
    puts("After Sorting:");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    puts("Median3 Value:");
    if (cnt == 0) {
        puts("none");
    }
    else {
        for (int i = 0; i < cnt; i++) {
            printf("%d ", median[i]);
        }
        puts("");
    }
}