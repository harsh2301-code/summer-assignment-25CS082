#include <stdio.h>

int palindrome(int n)
{
    int temp = n, rev = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return temp == rev;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}