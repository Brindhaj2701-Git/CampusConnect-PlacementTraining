#include<stdio.h>

typedef struct employee{
    int emp_id;
    char name[20];
    float salary;
    int experience;
}emp;

int main(){
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    emp a[n];
    for(i=0;i<n;i++){
        printf("\nEnter Employee Details %d : \n",i+1);
        printf("Emp ID : ");
        scanf("%d",&a[i].emp_id);
        printf("Name : ");
        scanf("%s",a[i].name);
        printf("Salary : ");
        scanf("%f",&a[i].salary);
        printf("Experience : ");
        scanf("%d",&a[i].experience);
    }

    printf("\nEmployee Name with salary greater than 50000 and experience > 2 years : \n\n");
    for(i=0;i<n;i++){
        if(a[i].salary > 50000 && a[i].experience > 2){
            printf("Employee Name %d : %s\n",i+1,a[i].name);
        }
    }
    
}