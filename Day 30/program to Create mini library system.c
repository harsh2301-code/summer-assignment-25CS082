#include <stdio.h>
#include <string.h>

int main() {
    int id[100], issued[100];
    char title[100][50];
    int n = 0, choice, i, search, found;

    do {
        printf("\nMini Library System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);
                getchar();

                printf("Enter Book Title: ");
                fgets(title[n], sizeof(title[n]), stdin);
                title[n][strcspn(title[n], "\n")] = '\0';

                issued[n] = 0;
                n++;
                printf("Book Added Successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No Books Available.\n");
                } else {
                    printf("\nBook List:\n");
                    for (i = 0; i < n; i++) {
                        printf("ID: %d\n", id[i]);
                        printf("Title: %s\n", title[i]);
                        printf("Status: %s\n\n", issued[i] ? "Issued" : "Available");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &search);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        printf("ID: %d\n", id[i]);
                        printf("Title: %s\n", title[i]);
                        printf("Status: %s\n", issued[i] ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book Not Found.\n");
                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &search);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        if (!issued[i]) {
                            issued[i] = 1;
                            printf("Book Issued Successfully.\n");
                        } else {
                            printf("Book Already Issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book Not Found.\n");
                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &search);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        if (issued[i]) {
                            issued[i] = 0;
                            printf("Book Returned Successfully.\n");
                        } else {
                            printf("Book Was Not Issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book Not Found.\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 6);

    return 0;
}