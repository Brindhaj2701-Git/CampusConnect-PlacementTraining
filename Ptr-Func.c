#include<stdio.h>

void add(int *a,int n){
    int i;
    printf("\nThe array is : \n");
    for(i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}

int main(){
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    add(arr,n);

}