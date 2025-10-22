#include <stdio.h>

int main() {
    int light;
    printf("Enter light intensity (0–100): ");
    scanf("%d", &light);

    if (light < 30)
        printf(" Too Dark — Turning Lights ON.\n");
    else if (light < 70)
        printf(" Moderate Light.\n");
    else
        printf(" Bright Light — Lights OFF.\n");

    return 0;
}
