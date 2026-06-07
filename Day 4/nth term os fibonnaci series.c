#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    scanf("%d", &n);

    if (n == 0) {
        printf("%d", a);
    } else if (n == 1) {
        printf("%d", b);
    } else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", b);
    }

    return 0;
}