#include <stdio.h>

int main() {
    int mode;
    printf("Select Robot Mode (1=Manual, 2=Auto): ");
    scanf("%d", &mode);

    if (mode == 1)
        printf(" Manual Mode Activated.\n");
    else if (mode == 2)
        printf(" Automatic Mode Activated.\n");
    else
        printf(" Invalid Mode!\n");

    return 0;
}
