#include<stdio.h>
void main(){
    int n1,n2,t;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("\n Before Swapping \nThe first number is %d \n The second number is %d",n1,n2);
    t=n1;
    n1=n2;
    n2=t;
    printf("\n After Swapping \nThe first number is %d \n The second number is %d",n1,n2);
}
 