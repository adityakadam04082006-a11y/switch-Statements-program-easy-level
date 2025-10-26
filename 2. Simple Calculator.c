#include <stdio.h>

int main() {
    char op = '*';
    double n1 = 10, n2 = 5;
    double result;

    switch (op) {
        case '+':
            result = n1 + n2;
            printf("%.1f + %.1f = %.1f\n", n1, n2, result);
            break;
        case '-':
            result = n1 - n2;
            printf("%.1f - %.1f = %.1f\n", n1, n2, result);
            break;
        case '*':
            result = n1 * n2;
            printf("%.1f * %.1f = %.1f\n", n1, n2, result);
            break;
        case '/':
            result = n1 / n2;
            printf("%.1f / %.1f = %.1f\n", n1, n2, result);
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }
    return 0;
}