#include <stdio.h>

int main() {
    int lang = 3; // 1=EN, 2=ES, 3=FR

    switch (lang) {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Hola!\n");
            break;
        case 3:
            printf("Bonjour!\n");
            break;
        default:
            printf("Language not supported.\n");
            break;
    }
    return 0;
}