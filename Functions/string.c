#include<stdio.h>
#include<string.h>

int lengthcheck(char str[]) {
    int i;
  for( i = 0; str[i] != '\0'; i++) {
     
    }
    return i-1;
}
void copy(char source[],char dest[]){
    int i;
    for(i=0;source[i]!='\0';i++){
        dest[i]=source[i];
    }
    dest[i]='\0';
}
void concatenate(char str1[], char str2[], char result[]) {
    int i, j;
    for(i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }
    for(j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';
}

void palindromeCheck(char str[]) {
    int len = strlen(str)-1;
    int isPalindrome = 1;
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome==1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

int compareStrings(char str1[], char str2[]) {
    int i;
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
    }
    return str1[i] - str2[i];
}
int main(){
    char str[100];
    char wel[]="Welcome to VS Code";
    
    printf("At compile time: %s\n", wel);
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
  
    printf("Length calculated manually: %d\n",lengthcheck(str));
    palindromeCheck(str);
    char dest[100];
    
    copy(str,dest);
    printf("Copied string: %s\n", dest);
    concatenate(wel,str,dest);
    printf("Concatenated string: %s\n", dest);
    
    int cmp = compareStrings(str, wel);
    if(cmp == 0) {
        printf("Strings are equal.\n");
    } else if(cmp > 0) {
        printf("str is greater than wel.\n");
    } else {
        printf("str is less than wel.\n");
    }
    
    return 0;
}
