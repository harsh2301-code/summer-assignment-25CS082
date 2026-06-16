#include <stdio.h>

int main() {
    int n, i, d;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);

    d = d % n;

    while(d--) {
        int last = arr[n - 1];
        for(i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = last;
    }

    printf("Array after right rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}