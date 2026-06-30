#include <stdio.h>

int main() {
    int seats = 50;
    int choice, tickets;

    do {
        printf("\nTicket Booking System\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of tickets: ");
                scanf("%d", &tickets);

                if (tickets > 0 && tickets <= seats) {
                    seats -= tickets;
                    printf("%d Ticket(s) Booked Successfully.\n", tickets);
                } else {
                    printf("Not Enough Seats Available.\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", seats);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 3);

    return 0;
}