#include <stdio.h>

int main() {
    char input = '7';

    switch (input) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("'%c' is a digit.\n", input);
            break;
        default:
            printf("'%c' is not a digit.\n", input);
            break;
    }
    return 0;
}