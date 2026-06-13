#include <stdio.h>

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Maximum = %d", maximum(a, b));

    return 0;
}