#include<stdio.h>
float circle(float r){
    return 3.14*r*r;
}
void main(){
    int r;
    printf("Enter the radius");
    scanf("%d",&r);
    printf("The area is %f",circle(r));
}