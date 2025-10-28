#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &n);

    // Upper half including middle
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}