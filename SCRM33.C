#include <stdio.h>

int main() {
    int battery;
    float temp;
    printf("Enter Battery %%: ");
    scanf("%d", &battery);
    printf("Enter Temperature °C: ");
    scanf("%f", &temp);

    if (battery < 20)
        printf("Battery Low!\n");
    if (temp > 60)
        printf("temperature High!\n");
    if (battery >= 20 && temp <= 60)
        printf("Robot Condition: Normal.\n");

    return 0;
}
