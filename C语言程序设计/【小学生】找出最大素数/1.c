#include<stdio.h>
#include<math.h>

int pd(int k) {
    for (int i = 2; i <= sqrt(k); i++) {
        if (k % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n;; i--) {
        if (pd(i) == 1) {
            printf("The max prime number is %d.\n", i);
            return 0;
        }
    }
}

