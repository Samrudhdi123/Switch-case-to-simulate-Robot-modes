#include <stdio.h>

int main() {
    char direction;
    printf("Enter direction (F=Forward, B=Backward, L=Left, R=Right): ");
    scanf(" %c", &direction);

    switch (direction) {
        case 'F': case 'f': printf("Moving Forward\n"); break;
        case 'B': case 'b': printf("Moving Backward\n"); break;
        case 'L': case 'l': printf("Turning Left\n"); break;
        case 'R': case 'r': printf("Turning Right\n"); break;
        default: printf("Invalid direction!\n");
    }

    return 0;
}
