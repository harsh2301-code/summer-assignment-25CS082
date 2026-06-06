#include <stdio.h>

int main() {
    int start, end, i, j, prime;

    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) 
        if (i < 2)
            continue;

        prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", i);
    }


