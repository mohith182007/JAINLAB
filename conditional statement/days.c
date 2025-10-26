#include<stdio.h>
void main(){
int weeks,days;
printf("enter the days : ");
scanf("%d",&days);
weeks=days/7;
days=days%7;
printf("this the %d week and %d days",weeks,days);
}
