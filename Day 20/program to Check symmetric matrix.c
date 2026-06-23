#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;

    scanf("%d", &n);

    int a[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}