#include <stdio.h>

int main() {
    char confirm = 'y';

    switch (confirm) {
        case 'Y':
        case 'y':
            printf("Action Confirmed.\n");
            break;
        case 'N':
        case 'n':
            printf("Action Cancelled.\n");
            break;
        default:
            printf("Invalid input.\n");
            break;
    }
    return 0;
}