#include<stdio.h>
#include<math.h>
void main(){
float p,t,r,sp,cp,a;
printf("enter the principal amount time and rate of interest");
scanf("%f%f%f",&p,&t,&r);
a=p*(pow((1+r/100),t));
cp=a-p;
sp=(p*t*r)/100;
printf("the compound interest is %f\n",cp);
printf("The simple interest is %f",sp);
}
