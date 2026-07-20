#include<stdio.h>

typedef struct student{
    int reg_no;
    char name[20];
    float cgpa;
}stud;

int main(){
    int n,i;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    stud arr[n];
    for(i=0;i<n;i++){
        printf("\nEnter Student %d Details : \n",i+1);
        printf("Reg No : ");
        scanf("%d",&arr[i].reg_no);
        printf("Name : ");
        scanf("%s",arr[i].name);
        printf("CGPA : ");
        scanf("%f",&arr[i].cgpa);
    }

    for(i=0;i<n;i++){
        if(arr[i].cgpa>=8.00 && arr[i].cgpa<=10.00){
            printf("\nStudent %d Details : \n",i+1);
            
            printf("Name : %s\n",arr[i].name);
            
        }
    }
}