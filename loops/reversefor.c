#include <stdio.h>

void main() {
    int n, d, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        d = n % 10;
        rev = rev * 10 + d;
        n=n/ 10;
    }
    printf("Reversed number: %d\n", rev);
    
}