#include<stdio.h>
void main(){
    int m[100],n,i,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++){
      sum=sum+m[i];
    }
    printf("The sum is %d",sum);}

