#include<stdio.h>

int Sum(int x,int y){
    int c = x+y;
    printf("Sum is : %d",c);
}

int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    Sum(a,b);
}