#include<stdio.h>
int bubbleSort(int arr[], int size){
    int i, j, temp;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int m[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &m[i]);
    }
    bubbleSort(m, n);
    printf("The sorted array is: ");
    for(i=0; i<n; i++){
        printf("\t%d", m[i]);
    }
    return 0;
}