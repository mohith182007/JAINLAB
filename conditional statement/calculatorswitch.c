#include<stdio.h>
void main(){
    int n1,n2,sum=0;
    char a;
    printf("enter the operation:");
    scanf("%c",&a);
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);

    switch(a){
        case '+': sum=n1+n2;break;
        case '-': sum=n1-n2;break;
        case '*': sum=n1*n2;break;
        case '/': sum=n1/n2;break;
        default:printf("invalid operator");
    }

    printf("the answer is %d",sum);
}