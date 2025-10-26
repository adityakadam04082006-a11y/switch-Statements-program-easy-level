#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good Job!\n");
            break;
        case 'C':
            printf("Average.\n");
            break;
        case 'D':
            printf("Pass.\n");
            break;
        case 'F':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid Grade.\n");
            break;
    }
    return 0;
}