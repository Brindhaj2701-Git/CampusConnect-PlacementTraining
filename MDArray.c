#include<stdio.h>

int main(){
    int r,c,i,j;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("\nEnter the elements of the Multi-Dimensional array : ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Multi-Dimensional array is : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}