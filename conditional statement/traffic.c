#include <stdio.h>

void main() {
    int choice;

    printf("Traffic Light System Simulation\n");
    printf("1. Red\n2. Yellow\n3. Green\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Red Light: STOP\n");
            break;
        case 2:
            printf("Yellow Light: GET READY\n");
            break;
        case 3:
            printf("Green Light: GO\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}
