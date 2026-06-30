#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\nMenu-Driven Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero is not allowed.\n");
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 5);

    return 0;
}