#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int arr[], const int len) {
    if (len <= 1) return;
    const int pivot = arr[rand() % len];
    int i = 0, j = 0, k = len;
    while (i < k) {
        if (arr[i] < pivot)
            swap(&arr[i++], &arr[j++]);
        else if (pivot < arr[i])
            swap(&arr[i], &arr[--k]);
        else
            i++;
    }
    quick_sort(arr, j);
    quick_sort(arr + k, len - k);
}

int a[100010], b[100010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    quick_sort(a, n);
    quick_sort(b, m);
    int total = 0, sum = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] >= a[total]) {
            total++;
            sum += b[i];
            if (total == n) {
                printf("%d\n", sum);
                return 0;
            }
        }
    }
    printf("bit is doomed!\n");
}