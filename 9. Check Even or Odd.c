#include <stdio.h>

int main() {
    int num = 7;

    switch (num % 2) {
        case 0:
            printf("%d is Even.\n", num);
            break;
        case 1:
            printf("%d is Odd.\n", num);
            break;
        // No default needed as % 2 can only be 0 or 1
    }
    return 0;
}