#include <stdio.h>

int main() {
    long long n, largest = 0;

    scanf("%lld", &n);

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 2)
        largest = n;

    printf("%lld", largest);

    return 0;
}