#include<stdio.h>

void main(){
    int n,i;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The Elements of the Array are : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   
}