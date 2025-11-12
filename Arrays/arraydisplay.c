#include<stdio.h>
void main(){
    int a[]={10,20,30,40},m[100],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    printf("During run time");
    for(i=0;i<4;i++){
        printf("\t%d", a[i]);}
    printf("during compile time");
     for(i=0;i<n;i++){
        printf("\t%d",m[i]);
    }
}