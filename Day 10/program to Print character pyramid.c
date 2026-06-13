#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(ch = 'A'; ch < 'A' + i; ch++)
            printf("%c", ch);

        for(ch = 'A' + i - 2; ch >= 'A'; ch--)
            printf("%c", ch);

        printf("\n");
    }

    return 0;
}