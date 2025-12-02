#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char wel[]="Welcome to VS Code";
    
    printf("At compile time: %s\n", wel);
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("At run time The string is: %s", str);
    
    return 0;
}
