#include<stdio.h>

int Sum(int x,int y){
    return x+y;
}

int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    int c = Sum(a,b);
    printf("Sum is : %d",c);
}