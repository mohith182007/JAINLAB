#include<stdio.h>
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a<0){
        printf("it is a negative number");
    }
    else if(a>0){
        printf("it is a positive number");

    }else{
        printf("It is zero");
    }}