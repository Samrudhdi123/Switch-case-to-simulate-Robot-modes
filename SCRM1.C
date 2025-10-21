#include <stdio.h>

int main() {
    char command;

    printf("Enter robot command:\n");
    printf("'S' or 's' = Start Robot\n");
    printf("'T' or 't' = Stop Robot\n");
    printf("Enter your command: ");
    scanf(" %c", &command);

    switch (command) {
        case 'S':
        case 's':
            printf(" Robot Started.\n");
            break;
        case 'T':
        case 't':
            printf("Robot Stopped.\n");
            break;
        default:
            printf("Invalid command! Please enter 'S' or 'T'.\n");
            break;
    }

    return 0;
}
