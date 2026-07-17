#include<stdio.h>

void main(){
    int num, sum=0;
    printf("Enter a Number : ");
    scanf("%d",&num);
    while(num!=0){
        sum = sum*10 + num%10;
        num = num/10;
    }
    printf("Reverse of the Number is : %d",sum);
}