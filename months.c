#include<stdio.h>
void main(){
    int dayno;
    printf("enter the month:");
    scanf("%d",&dayno);
    switch(dayno){
        case 1:printf("Janauary\n");
            break;
        case 2:printf("Febraury\n");
            break;
        case 3:printf("march\n");
            break;
        case 4:printf("April\n");
            break;
        case 5:printf("May\n");
            break;
        case 6:printf("june\n");
            break;
        case 7:printf("july\n");
            break;
            case 8:printf("august\n");
            break;
            case 9:printf("october\n");
            break;
            case 11:printf("november");
            break;
            case 12:printf("december");
            break;
            
        default:printf("enter a valid day");
    } 
}