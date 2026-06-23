#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' '))
            words++;
        i++;
    }

    printf("%d", words);

    return 0;
}