#include <stdio.h>

int main() {
    char light = 'R';

    switch (light) {
        case 'R':
        case 'r':
            printf("STOP\n");
            break;
        case 'Y':
        case 'y':
            printf("SLOW DOWN / PREPARE TO STOP\n");
            break;
        case 'G':
        case 'g':
            printf("GO\n");
            break;
        default:
            printf("Broken Light!\n");
            break;
    }
    return 0;
}