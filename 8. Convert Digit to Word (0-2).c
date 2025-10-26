#include <stdio.h>

int main() {
    int digit = 1;

    switch (digit) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Not 0, 1, or 2.\n");
            break;
    }
    return 0;
}