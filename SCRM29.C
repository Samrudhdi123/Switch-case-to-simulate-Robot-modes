#include <stdio.h>

int main() {
    int code;
    printf("Enter error code (1–3): ");
    scanf("%d", &code);

    switch (code) {
        case 1: printf(" Motor Failure\n"); break;
        case 2: printf(" Low Battery\n"); break;
        case 3: printf("Sensor Error\n"); break;
        default: printf(" No Error Detected\n");
    }

    return 0;
}
