#include <stdio.h>

int main() {
    int command = 1; // 1=Idle, 2=Active

    switch (command) {
        case 1:
            printf("Robot is now in IDLE mode.\n");
            break;
        case 2:
            printf("Robot is now in ACTIVE mode.\n");
            break;
        case 3:
            printf("Robot is in ERROR mode!\n");
            break;
        default:
            printf("Invalid command.\n");
            break;
    }
    return 0;
}