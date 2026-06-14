#include <stdio.h>

int main()
{
    int a[100], n, i, key, freq = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            freq++;
    }

    printf("Frequency of %d = %d", key, freq);

    return 0;
}