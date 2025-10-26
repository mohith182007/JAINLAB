#include<stdio.h>
void main(){
int num,i,t1=0,t2=1,sum;
printf("for how many times u want u print fiobanacci series::");
scanf("%d",&num);
for(i=0;i<num;i++){
sum=t1+t2;
printf("%d\n",sum);
t1=t2;
t2=sum;}}




