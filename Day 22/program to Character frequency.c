#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("%d", count);

    return 0;
}