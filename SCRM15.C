#include <stdio.h>

int main() {
    int pos;
    printf("Enter arm position (1–5): ");
    scanf("%d", &pos);

    switch (pos) {
        case 1: printf("Arm at Base Position\n"); break;
        case 2: printf("Arm at Mid Level\n"); break;
        case 3: printf("Arm Half Raised\n"); break;
        case 4: printf("Arm Fully Raised\n"); break;
        case 5: printf("Arm in Hold Position\n"); break;
        default: printf("Invalid Position!\n");
    }

    return 0;
}
