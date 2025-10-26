#include <stdio.h>

int main() {
    int item = 2;

    printf("Vending Machine:\n1. Cola\n2. Chips\n3. Candy\n");
    printf("Your choice: %d\n", item);

    switch (item) {
        case 1:
            printf("Dispensing Cola. $1.50\n");
            break;
        case 2:
            printf("Dispensing Chips. $1.00\n");
            break;
        case 3:
            printf("Dispensing Candy. $0.75\n");
            break;
        default:
            printf("Item not available.\n");
            break;
    }
    return 0;
}