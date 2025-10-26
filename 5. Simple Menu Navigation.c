#include <stdio.h>

int main() {
    int choice = 2;

    printf("Menu:\n");
    printf("1. Start Game\n");
    printf("2. Load Game\n");
    printf("3. View Settings\n");
    printf("4. Exit\n");
    printf("Your choice: %d\n", choice);

    switch (choice) {
        case 1:
            printf("Starting new game...\n");
            break;
        case 2:
            printf("Loading game...\n");
            break;
        case 3:
            printf("Opening settings...\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}