#include<stdio.h>
int main(){
    int m[100],n,i,j,temp;
    float median;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);}
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(m[j]>m[j+1]){
                temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;}}}
    if(n%2==0){
        median=(m[n/2-1]+m[n/2])/2.0;
    }
    else{
        median=m[n/2];
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("\t%d",m[i]);}
    printf("\nthe median of array is %f\n",median);
    return 0;
}