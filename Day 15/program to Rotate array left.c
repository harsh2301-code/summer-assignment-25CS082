#include <stdio.h>

int main() {
    int n, i, d;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    d = d % n;

    while(d--) {
        int first = arr[0];
        for(i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        arr[n - 1] = first;
    }

    printf("Array after left rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}