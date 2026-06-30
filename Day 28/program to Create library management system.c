#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
};

int main() {
    struct Book books[100];
    int n = 0, choice, id, i, found;
    char title[50], author[50];

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[n].id);
                getchar();
                printf("Enter Title: ");
                fgets(books[n].title, sizeof(books[n].title), stdin);
                books[n].title[strcspn(books[n].title, "\n")] = 0;
                printf("Enter Author: ");
                fgets(books[n].author, sizeof(books[n].author), stdin);
                books[n].author[strcspn(books[n].author, "\n")] = 0;
                books[n].issued = 0;
                n++;
                printf("Book Added Successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No Books Available.\n");
                } else {
                    printf("\nBook List:\n");
                    for (i = 0; i < n; i++) {
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        printf("Status: %s\n\n", books[i].issued ? "Issued" : "Available");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (books[i].id == id) {
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        printf("Status: %s\n", books[i].issued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Book Not Found.\n");
                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (books[i].id == id) {
                        if (!books[i].issued) {
                            books[i].issued = 1;
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
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (books[i].id == id) {
                        if (books[i].issued) {
                            books[i].issued = 0;
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