#include <stdio.h>

int main() {
    int option = 3;

    printf("ATM Menu:\n1. Withdraw\n2. Deposit\n3. Check Balance\n");
    
    switch (option) {
        case 1:
            printf("Enter amount to withdraw...\n");
            break;
        case 2:
            printf("Enter amount to deposit...\n");
            break;
        case 3:
            printf("Your balance is $500.00\n");
            break;
        default:
            printf("Invalid option.\n");
            break;
    }
    return 0;
}