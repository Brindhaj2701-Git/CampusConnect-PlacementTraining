#include<stdio.h>

int main(){
    int n,count =0;
    printf("Enter n Value : ");
    scanf("%d",&n);
    while(n>0){
        n = n/2;
        count++;
    }
    printf("\nMaximum possible value : %d\n",count);
}