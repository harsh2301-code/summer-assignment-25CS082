#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Quiz Application\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 3)
        score++;

    printf("\nYour Score: %d/3\n", score);

    return 0;
}