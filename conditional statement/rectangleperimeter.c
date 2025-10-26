#include<stdio.h>
void main(){
    float l,b,p;
    printf("Enter the length and breadth of the rectangle");
    scanf("%f%f",&l,&b);
    p=2*(l+b);
    printf("\nThe perimeter of the rectangle is %f",p);
}