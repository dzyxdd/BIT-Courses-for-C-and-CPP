#include <stdio.h>
#include <string.h>

int main() {
    char base[10000];
    int ex;
    char buff, head;
    scanf("%c", &buff);
    head = buff;
    scanf("%c", &buff);
    if (buff == '.')
        scanf("%s", base);
    scanf(" %*c%d", &ex);
    if (ex >= 0) {
        if (ex >= strlen(base)) {
            printf("%c%s", head, base);
            for (int i = 0; i < ex - strlen(base); i++)
                printf("0");
            printf(".00000000");
        } else {
            printf("%c", head);
            for (int i = 0; i < ex; i++)
                printf("%c", base[i]);
            printf(".");
            if (strlen(base) - ex < 8) {
                for (int i = ex; i < strlen(base); i++)
                    printf("%c", base[i]);
                for (int i = 0; i < 8 - strlen(base) + ex; i++)
                    printf("0");
            } else {
                for (int i = ex; i < 8 + ex; i++)
                    printf("%c", base[i]);
            }
        }
    } else {
        ex *= -1;
        printf("0.");
        if (ex > 8)
            printf("00000000");
        else {
            for (int i = 0; i < ex - 1; i++) printf("0");
            printf("%c%.7s", head, base);
            for (int i = 0; i < 8 - strlen(base) - ex; i++) printf("0");
        }
    }
    printf("\n");
}
