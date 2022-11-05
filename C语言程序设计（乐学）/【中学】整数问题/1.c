#include <stdio.h>

int n, count = 0;

void solve(int t, int k) {
	if (k == n + 1) {
		if (n != 0)count++;
		return;
	}
	for (int i = 0; i < 10; i++) {
		if (k == 1 && i == 0)continue;
		if ((t * 10 + i) % (k * k) == 0)
			solve(t * 10 + i, k + 1);
	}
}

int main() {
	scanf("%d", &n);
	if (n == 0) {
		puts("0");
		return 0;
	}
	solve(0, 1);
	printf("%d\n", count);
}