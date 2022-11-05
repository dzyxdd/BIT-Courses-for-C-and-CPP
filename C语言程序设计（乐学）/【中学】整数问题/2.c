#include <string.h>
#include <stdio.h>
int a[110], b[110], c[] = { 0,1,4,9,16,25,36,49,64,81 };

int main() {
	int n, t = 0, s = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		s = 0;
		if (t == 0) {
			a[t] = 0; t = 1;
		}
		for (int j = 0; j < t; j++) {
			for (int k = 0; k < 10; k++) {
				if(i==1&&k==0)continue;
				if ((a[j] * 10 + k) % c[i] == 0)
					b[s++] = a[j] * 10 + k;
			}
		}
		memcpy(a, b, sizeof(b));
		t = s;
	}
	printf("%d\n", s);
}