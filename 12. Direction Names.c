#include <stdio.h>

int main() {
    char dir = 'N';

    switch (dir) {
        case 'N':
            printf("Going North!\n");
            break;
        case 'S':
            printf("Going South!\n");
            break;
        case 'E':
            printf("Going East!\n");
            break;
        case 'W':
            printf("Going West!\n");
            break;
        default:
            printf("Invalid Direction.\n");
            break;
    }
    return 0;
}