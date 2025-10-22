#include <stdio.h>

int main() {
    int speed;
    printf("Enter speed (1-5): ");
    scanf("%d", &speed);

    switch (speed) {
        case 1: printf("Speed: Very Slow\n"); break;
        case 2: printf("Speed: Slow\n"); break;
        case 3: printf("Speed: Medium\n"); break;
        case 4: printf("Speed: Fast\n"); break;
        case 5: printf("Speed: Very Fast\n"); break;
        default: printf("Invalid speed level!\n");
    }

    return 0;
}
