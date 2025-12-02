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
}
void main(){
    printf("Enter the choice\n1.Sum of array elements\n2.Largest element in array\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1){
    sum();}
    else if(choice==2){
    largest();}
    else{
        printf("Invalid choice");
    }
}
