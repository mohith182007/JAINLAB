#include<stdio.h>
void main(){
    float time;
    printf("enter the time ");
    scanf("%f",&time);
    if(time<=11.45){
        printf("You can enter the class");
    }
    else if(time>11.45){
        printf("Come to the next class");
    }
    
}