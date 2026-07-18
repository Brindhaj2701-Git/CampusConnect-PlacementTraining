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
        temp = arr[0];
        for(int i=0;i<n;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;
    }
    printf("%s",arr);
}