#include <stdio.h>

int main() {
    int day, month, year;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Input
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Check for leap year and adjust February days
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        daysInMonth[1] = 29;
    }

    // Increment day
    day++;

    // Check if day exceeds days in current month
    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;
        
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    printf("Next Date is: %02d/%02d/%04d\n", day, month, year);
    return 0;
}
