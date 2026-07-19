#include<stdio.h>

int Sum(){
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    int c = x+y;
    return c;
}

int main(){
    int result = Sum();
    printf("Sum is : %d",result);
}