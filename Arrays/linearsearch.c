#include<stdio.h>
int main(){
    int m[100],n,i,flag=0,search;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);}
    printf("Enter the element to be searched:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(m[i]==search){
            flag=1;
            break;}}
    if(flag==1){
        printf("Element found at position %d",i+1);}
    else{
        printf("Element not found");}
    return 0;
}