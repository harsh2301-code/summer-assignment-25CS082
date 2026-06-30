#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;

    do {
        printf("\nBank Account System\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit Successful.\n");
                } else {
                    printf("Invalid Amount.\n");
                }
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful.\n");
                } else {
                    printf("Insufficient Balance or Invalid Amount.\n");
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 4);

    return 0;
}