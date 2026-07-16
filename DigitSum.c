#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Digits to Find its Sum of Digits in Single Digit: ");
    scanf("%d",&num);

    if(num==0)
        printf("\nSum of Digits: 0");
    else if(num%9==0)
        printf("\nSum of Digits: 9");
    else
        printf("\nSum of Digits: %d",num%9);

    return 0;
}