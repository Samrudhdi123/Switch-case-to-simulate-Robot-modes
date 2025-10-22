#include <stdio.h>

int main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (temp > 50)
        printf("Overheating!\n");
    else if (temp < 10)
        printf(" Too Cold!\n");
    else
        printf(" Temperature Normal\n");

    return 0;
}
