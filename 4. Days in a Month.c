#include <stdio.h>

int main() {
    int month = 9; // September
    
    switch (month) {
        case 1: // Jan
        case 3: // Mar
        case 5: // May
        case 7: // Jul
        case 8: // Aug
        case 10: // Oct
        case 12: // Dec
            printf("31 days\n");
            break;
        case 4: // Apr
        case 6: // Jun
        case 9: // Sep
        case 11: // Nov
            printf("30 days\n");
            break;
        case 2: // Feb
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month.\n");
            break;
    }
    return 0;
}