#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[100];
    int n = 0, choice, id, i, found;

    do {
        printf("\nInventory Management System\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &items[n].id);
                getchar();

                printf("Enter Item Name: ");
                fgets(items[n].name, sizeof(items[n].name), stdin);
                items[n].name[strcspn(items[n].name, "\n")] = '\0';

                printf("Enter Quantity: ");
                scanf("%d", &items[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &items[n].price);

                n++;
                printf("Item Added Successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No Items Available.\n");
                } else {
                    printf("\nItem List:\n");
                    for (i = 0; i < n; i++) {
                        printf("ID: %d\n", items[i].id);
                        printf("Name: %s\n", items[i].name);
                        printf("Quantity: %d\n", items[i].quantity);
                        printf("Price: %.2f\n\n", items[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to Search: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (items[i].id == id) {
                        printf("ID: %d\n", items[i].id);
                        printf("Name: %s\n", items[i].name);
                        printf("Quantity: %d\n", items[i].quantity);
                        printf("Price: %.2f\n", items[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item Not Found.\n");
                break;

            case 4:
                printf("Enter Item ID: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (items[i].id == id) {
                        printf("Enter New Quantity: ");
                        scanf("%d", &items[i].quantity);
                        printf("Quantity Updated Successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item Not Found.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 5);

    return 0;
}