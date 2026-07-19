#include<stdio.h>

void Sum(){
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    int c = x+y;
    printf("Sum is : %d",c);
}

int main(){
    Sum();
}