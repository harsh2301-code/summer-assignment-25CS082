#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    str1[0] = '\0';

    do {
        printf("\nMenu-Driven String Operations System\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate String\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter String: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                break;

            case 2:
                printf("String: %s\n", str1);
                break;

            case 3:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 4:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;

            case 5:
                printf("Enter Another String: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 6:
                printf("Enter Another String: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if (strcmp(str1, str2) == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 7: {
                int i, len = strlen(str1);
                for (i = 0; i < len / 2; i++) {
                    char temp = str1[i];
                    str1[i] = str1[len - i - 1];
                    str1[len - i - 1] = temp;
                }
                printf("Reversed String: %s\n", str1);
                break;
            }

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 8);

    return 0;
}