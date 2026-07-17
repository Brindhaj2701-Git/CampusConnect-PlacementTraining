#include<stdio.h>

void main(){
    int i,n,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("\nSum of Array Elements is : %d",sum);
}