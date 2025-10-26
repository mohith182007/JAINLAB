#include <stdio.h>

void main() {
    int num, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    for (; temp != 0; temp /= 10) {
        digit = temp % 10;
        sum += digit;
    }

    printf("Sum of digits of %d is %d\n", num, sum);
}
