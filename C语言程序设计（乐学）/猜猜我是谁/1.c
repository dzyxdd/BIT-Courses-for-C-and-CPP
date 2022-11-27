#include <stdio.h>

int main() {
    char fileName[20], sen[100];
    int cnt = 0, n;
    scanf("%s%d", fileName, &n);
    if (freopen(fileName, "r", stdin) == NULL) {
        puts("File Name Error.");
        return 0;
    }
    while (scanf("%s", sen) != EOF) {
        cnt++;
        if (cnt == n) {
            printf("%s\n", sen);
            return 0;
        }
    }
    puts("Line No Error.");
}