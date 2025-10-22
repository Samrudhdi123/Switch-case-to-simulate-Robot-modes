#include <stdio.h>

int main() {
    int obstacleDistance;
    printf("Enter distance from obstacle (cm): ");
    scanf("%d", &obstacleDistance);

    if (obstacleDistance > 100)
        printf("Speed:  Full Speed\n");
    else if (obstacleDistance > 50)
        printf("Speed: Medium Speed\n");
    else
        printf("Speed: Stop Immediately\n");

    return 0;
}
