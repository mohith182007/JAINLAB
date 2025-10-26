#include<stdio.h>
void main(){
    char c;
    printf("enter the character");
    scanf("%c",&c);
    switch(c){
        case 'A' :  
        case 'E' :  
        case 'I' :  ;
        case 'a' :  
        case 'e' :  
        case 'i' :  
        case 'o' :  
        case 'u' :  printf("It is a vowel");break;
        default:printf("it is a constant");
        
    }
}