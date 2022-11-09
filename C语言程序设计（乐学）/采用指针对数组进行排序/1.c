/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


char* resort(char* a);
int main(int argc, char* argv[]) {

    char a[100];
    gets(a);
    puts(resort(a));
    return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */

#include <string.h>
char* resort(char* a) {
    int len = strlen(a);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    return a;
}