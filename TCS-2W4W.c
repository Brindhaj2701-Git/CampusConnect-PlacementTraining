#include<stdio.h>

int main(){
    int v,w;
    printf("Enter the number of vehicles : ");
    scanf("%d",&v);
    printf("\nEnter the number of wheels : ");
    scanf("%d",&w);
    int tw = ((4* v) - w) / 2;
    int fw = v - tw;
    printf("\nNumber of two wheeler : %d\n",tw);
    printf("\nNumber of four wheeler : %d\n",fw);

}