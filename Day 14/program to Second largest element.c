#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, secondLargest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = secondLargest = -2147483648;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}