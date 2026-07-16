#include<stdio.h>

void main(){
    char ch;
    printf("Enter a Character : ");
    scanf("%c",&ch);
    switch(ch){
        case 'A'...'Z':
            printf("\nUppercase Character");
            break;
        case 'a'...'z':
            printf("\nLowercase Character");
            break;
        default:
            printf("\nNot an alphabet, It is a Number");
    }
}