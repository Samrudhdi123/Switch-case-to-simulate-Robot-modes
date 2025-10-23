#include <stdio.h>

int main() {
    float speed, time, distance;
    printf("Enter speed (m/s): ");
    scanf("%f", &speed);
    printf("Enter time (s): ");
    scanf("%f", &time);

    distance = speed * time;
    printf("Robot Traveled Distance = %.2f meters\n", distance);
    return 0;
}
