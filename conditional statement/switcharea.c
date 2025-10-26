#include <stdio.h>
#define PI 3.1416

void main() {
    int choice;
    float side, length, breadth, radius, area;
    printf("1. Square\n2. Rectangle\n3. Circle\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area: %.2f\n", area);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f%f", &length, &breadth);
            area = length * breadth;
            printf("Area: %.2f\n", area);
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area: %.2f\n", area);
            break;
            default:
                printf("Invalid choice\n");
    }
}