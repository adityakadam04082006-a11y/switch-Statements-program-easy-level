#include <stdio.h>

int main() {
    int dayNum = 6; // Saturday

    switch (dayNum) {
        case 1: // Mon
        case 2: // Tue
        case 3: // Wed
        case 4: // Thu
        case 5: // Fri
            printf("It's a weekday.\n");
            break;
        case 6: // Sat
        case 7: // Sun
            printf("It's the weekend!\n");
            break;
        default:
            printf("Invalid day number.\n");
            break;
    }
    return 0;
}