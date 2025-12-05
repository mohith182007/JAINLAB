#include<stdio.h>
void array(int arr[], int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("The sum of array elements is %d\n",sum);
}
int main(){
    int m[100],n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    array(m,n);
    return 0;

}