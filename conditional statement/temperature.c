#include <stdio.h>

void main() {
    int choice;
    float temp, converted;
    printf("\nTemperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = (temp * 9.0 / 5.0) + 32.0;
            printf("Temperature in Fahrenheit: %.2f\n", converted);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted = (temp - 32.0) * 5.0 / 9.0;
            printf("Temperature in Celsius: %.2f\n", converted);
            break;
        case 3:
            printf("Exiting program.\n");
            return;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}
