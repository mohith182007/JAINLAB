#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[100];
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    strcpy(str3, str1);
    printf("strcpy result: %s\n", str3);
    
    strcat(str4, str1);
    strcat(str4, " ");
    strcat(str4, str2);
    printf("strcat result: %s\n", str4);
    
    printf("strlen of str1: %lu\n", strlen(str1));
    
    printf("strcmp str1 and str3: %d\n", strcmp(str1, str3));
    
    printf("strncmp first 3 chars: %d\n", strncmp(str1, str2, 3));
    
    char *ptr = strchr(str1, 'l');
    printf("strchr found: %s\n", ptr);
    
    ptr = strstr(str4, "World");
    printf("strstr found: %s\n", ptr);
    
    char str5[50] = "Hello";
    strncat(str5, " C", 2);
    printf("strncat result: %s\n", str5);
    
    char str6[50];
    strncpy(str6, str1, 3);
    str6[3] = '\0';
    printf("strncpy result: %s\n", str6);
    
    return 0;
}