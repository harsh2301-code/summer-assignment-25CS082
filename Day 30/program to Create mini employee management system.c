#include <stdio.h>
#include <string.h>

int main() {
    int id[100], salary[100];
    char name[100][50];
    int n = 0, choice, i, search, found;

    do {
        printf("\nMini Employee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);
                getchar();

                printf("Enter Employee Name: ");
                fgets(name[n], sizeof(name[n]), stdin);
                name[n][strcspn(name[n], "\n")] = '\0';

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                printf("Employee Added Successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No Employees Available.\n");
                } else {
                    printf("\nEmployee List:\n");
                    for (i = 0; i < n; i++) {
                        printf("ID: %d\n", id[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Salary: %d\n\n", salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &search);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        printf("ID: %d\n", id[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Salary: %d\n", salary[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee Not Found.\n");
                break;

            case 4:
                printf("Enter Employee ID: ");
                scanf("%d", &search);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        printf("Enter New Salary: ");
                        scanf("%d", &salary[i]);
                        printf("Salary Updated Successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee Not Found.\n");
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