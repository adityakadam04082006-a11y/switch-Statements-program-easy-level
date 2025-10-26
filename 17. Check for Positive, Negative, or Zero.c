#include <stdio.h>

int main() {
    int num = -5;
    int sign;

    if (num > 0) sign = 1;
    else if (num < 0) sign = -1;
    else sign = 0;

    switch (sign) {
        case 1:
            printf("Positive\n");
            break;
        case -1:
            printf("Negative\n");
            break;
        case 0:
            printf("Zero\n");
            break;
    }
    return 0;
}