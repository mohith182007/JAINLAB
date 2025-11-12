#include<stdio.h>
void main(){
    int m[100],n,i,min,max;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);}
        min=m[0];
        max=m[0];    
    for (int i = 1; i < n; i++) {
        if (m[i] < min) {
            min = m[i];
        }
        if (m[i] > max) {
            max =m[i];
        }
    }
    
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}
