#include<stdio.h>
void main(){
    int m[100],n,i,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);}
    for(i=1;i<n-1;i++){
        for(j=0;j<n-i;j++){
            if(m[j]>m[j+1]){
                temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;}}}
    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("\t%d",m[i]);}}