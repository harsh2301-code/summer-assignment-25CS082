#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int temp = n, digits = 0, sum = 0, rem;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}