#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char wel[]="Welcome to VS Code";
    
    printf("%s\n", wel);
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The string is: %s", str);
    
    return 0;
}
