#include<stdio.h>
#include<string.h>

void main(){
    char arr[50],temp;
    printf("Enter the String : ");
    scanf("%[^\n]s",arr);
    int n = strlen(arr);
    int start=0, end=n-1;
    while(start<end){
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    printf("Reversed String is %s", arr);

}