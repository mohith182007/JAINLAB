#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, numDigits = 0;
    double sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Count the number of digits
    int temp = num;
    for (; temp != 0; temp /= 10) {
        numDigits++;
    }
    
    // Calculate sum of digits raised to the power of numDigits
    temp = num;
    for (; temp != 0; temp /= 10) {
        remainder = temp % 10;
        sum += pow(remainder, numDigits);
    }
    
    // Check if Armstrong number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
