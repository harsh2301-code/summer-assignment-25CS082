#include <stdio.h>

int main() {
    int a, b, x, y, gcd;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        gcd = y;
        y = x % y;
        x = gcd;
    }

    printf("%d", (a * b) / x);

    return 0;
}