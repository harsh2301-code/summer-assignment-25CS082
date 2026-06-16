#include <stdio.h>

int main() {
    int n, i, j, sum, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        printf("No pair found");

    return 0;
}