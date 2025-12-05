#include<stdio.h>
void sum();
void sum1(int a,int b);
int sum2();
int sum3(int,int);
void sum(){
     printf("\nThe function without return type and without parameters \n");
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    printf("The sum is %d/n",a+b);
}
void sum1(int a,int b){
     printf("\nThe function without return type and with parameters \n");
    printf("the sum is %d/n",a+b);
}
int sum2(){
     printf("\nThe function with return type and without parameters\n ");
     int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    return a+b;
}
int sum3(int a,int b){
    printf("\nThe function with return type and with parameters \n");
    return a+b;
    
}
int main(){
    sum();
    sum1(100,200);
    printf("\nThe sum is %d",sum2());
    printf("\nThe sum is %d",sum3(100,200));
    return 0;

}