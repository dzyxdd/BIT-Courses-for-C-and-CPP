#include <stdio.h>

int n;

int func(int day) {
    if (day == n) return 1;
    else return (func(day + 1) + day) * 2;
}

int main() {
    scanf("%d", &n);
    if (n == 1) printf("The monkey got 1 peach in first day.\n");
    else printf("The monkey got %d peaches in first day.\n", func(1));
}
