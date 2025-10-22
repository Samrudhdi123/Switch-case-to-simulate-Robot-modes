#include <stdio.h>

int main() {
    char command;
    printf("Enter command (S = Start, T = Stop): ");
    scanf(" %c", &command);

    if (command == 'S' || command == 's')
        printf("Robot Started.\n");
    else if (command == 'T' || command == 't')
        printf(" Robot Stopped.\n");
    else
        printf(" Invalid Command!\n");

    return 0;
}
