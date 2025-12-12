#include<stdio.h>
float simpleInterest(float principal, float rate, float time){
    return principal*rate*time/100;}

void main(){
    float p,r,t;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time in years:");
    scanf("%f",&t);
    printf("The simple interest is %f",simpleInterest(p,r,t));

}