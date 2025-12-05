#include<stdio.h>
void sum(){
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
    printf("The sum is %d",sum);
}
void largest(){
    int m[100],n,i,sum=0;
        printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++){
      if(m[i]>sum){
        sum=m[i];
      }
    }
    printf("the largest element is %d",sum);
    void search(){
    int m[100],n,i,flag=0,search;
    printf("Enter the number of elements:"); 
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
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
    }}

void main(){
    printf("Enter the choice\n1.Sum of array elements\n2.Largest element in array\n3.Search an element in array\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1){
    sum();}
    else if(choice==2){
    largest();}
    else if(choice==3){
    search();}
    else{
        printf("Invalid choice");
    }
}
