#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100], n, i, choice, search, found;
    char name[100][50];

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);
        getchar();

        printf("Enter Name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
        getchar();
    }

    do {
        printf("\nStudent Record System\n");
        printf("1. Display Records\n");
        printf("2. Search by Roll No\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nStudent Records:\n");
                for (i = 0; i < n; i++) {
                    printf("Roll No: %d\n", roll[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Marks: %d\n\n", marks[i]);
                }
                break;

            case 2:
                printf("Enter Roll No to Search: ");
                scanf("%d", &search);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (roll[i] == search) {
                        printf("Roll No: %d\n", roll[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Marks: %d\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student Record Not Found.\n");
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 3);

    return 0;
}