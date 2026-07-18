#include<stdio.h>
#include<string.h>

void main(){
    char arr[50],temp;
    printf("Enter the String : ");
    scanf("%[^\n]s",arr);
    int n = strlen(arr);
    int rot;
    printf("Enter a Rotation value : ");
    scanf("%d",&rot);
    rot = rot % n;
    while(rot--){
        temp = arr[n-1];
        for(int i=n-1;i>=0;i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
    printf("%s",arr);
}