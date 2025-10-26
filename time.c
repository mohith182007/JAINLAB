#include<stdio.h>
void main(){
int min,hrs;
printf("enter the time in minutes : ");
scanf("%d",&min);
hrs=min/60;
min=min%60;
printf("the time is %d hours and %d minutes",hrs,min);
}
