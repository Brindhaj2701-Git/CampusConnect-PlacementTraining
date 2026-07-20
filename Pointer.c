#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 15,*b,**c;
    b = &a;
    c = &b;
    printf("A Value : %d\n",a);
    printf("A Address : %d\n",&a);
    printf("B Value (A Address): %d\n",b);
    printf("B Address : %d\n",&b);
    printf("C Value (B Address): %d\n",c);
    printf("A Address (*C Value): %d\n",*c);
    printf("A Value (**C Value): %d\n",**c);
    return 0;
}