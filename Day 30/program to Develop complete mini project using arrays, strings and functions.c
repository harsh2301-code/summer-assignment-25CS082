#include <stdio.h>
#include <string.h>

int id[100], marks[100], n = 0;
char name[100][50];

void addStudent() {
    printf("Enter Student ID: ");
    scanf("%d", &id[n]);
    getchar();

    printf("Enter Student Name: ");
    fgets(name[n], sizeof(name[n]), stdin);
    name[n][strcspn(name[n], "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Student Added Successfully.\n");
}

void displayStudents() {
    int i;

    if (n == 0) {
        printf("No Student Records Available.\n");
        return;
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n\n", marks[i]);
    }
}

void searchStudent() {
    int search, i, found = 0;

    printf("Enter Student ID to Search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (id[i] == search) {
            printf("ID: %d\n", id[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found.\n");
}

void updateMarks() {
    int search, i, found = 0;

    printf("Enter Student ID: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (id[i] == search) {
            printf("Enter New Marks: ");
            scanf("%d", &marks[i]);
            printf("Marks Updated Successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found.\n");
}

int main() {
    int choice;

    do {
        printf("\nMini Student Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
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