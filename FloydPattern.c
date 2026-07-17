#include<stdio.h>

void main(){
    int i,j,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(i>=j)
                printf("* ");
        }
        printf("\n");
    }
}