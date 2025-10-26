#include<stdio.h>
void main(){
    float salary,bonus,finalsalary;
    printf("enter the salary:");
    scanf("%f",&salary);
    if(salary>0 && salary<25000){
        bonus=salary*0.15;
        finalsalary=bonus+salary;
        printf("the salary after the bonus is %f",finalsalary);

    }
    else if(salary>25000&&salary<50000){
        bonus=salary*0.10;
        finalsalary=bonus+salary;
        printf("the salary after the bonus is %f",finalsalary);
    }
    if(salary>50000){
        bonus=salary*0.05;
        finalsalary=bonus+salary;
        printf("the salary after the bonus is %f",finalsalary);

    }
    else{
        printf("salary cant be in negative");
    }
}