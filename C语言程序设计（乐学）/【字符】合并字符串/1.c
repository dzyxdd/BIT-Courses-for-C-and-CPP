#include <string.h>
#include<stdio.h>

char a[110], b[110], c[220];
int main() {
    scanf("%[^\n]", a);
    scanf(" %[^\n]",b);
    int ptra = 0, ptrb = 0, ptrc = 0;
    size_t lena = strlen(a), lenb = strlen(b);
    while (lena > ptra || lenb > ptrb) {
        if (ptra >= lena && ptrb < lenb)c[ptrc++] = b[ptrb++];
        else if (ptrb >= lenb && ptra < lena)c[ptrc++] = a[ptra++];
        else if (ptra < lena && ptrb < lenb) {
            if (a[ptra] < b[ptrb])c[ptrc++] = a[ptra++];
            else c[ptrc++] = b[ptrb++];
        }
    }
    printf("%s\n", c);
}