#include <stdio.h>

void main() {
    int rows, i, j, coeff = 1;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j <= i; j++) {
            if(j == 0 || i == 0)
                coeff = 1;
            else
                coeff = coeff * (i - j + 1) / j;
            
            printf("%d ", coeff);
        }
        printf("\n");
    }
}