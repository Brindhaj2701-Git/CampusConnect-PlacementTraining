#include<stdio.h>

typedef struct student{
    int reg_no;
    char name[20];
    float cgpa;
}acer;

int main(){
    acer a;
    printf("Enter Student Details : \n");
    printf("Reg No : ");
    scanf("%d",&a.reg_no);
    printf("Name : ");
    scanf("%s",a.name);
    printf("CGPA : ");
    scanf("%f",&a.cgpa);

    printf("\nStudent Details : \n");
    printf("Reg No : %d\n",a.reg_no);
    printf("Name : %s\n",a.name);
    printf("CGPA : %.2f\n",a.cgpa);

}