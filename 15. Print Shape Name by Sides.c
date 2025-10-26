#include <stdio.h>

int main() {
    int sides = 4;

    switch (sides) {
        case 3:
            printf("Triangle\n");
            break;
        case 4:
            printf("Square / Rectangle\n");
            break;
        case 5:
            printf("Pentagon\n");
            break;
        default:
            printf("Shape not recognized.\n");
            break;
    }
    return 0;
}