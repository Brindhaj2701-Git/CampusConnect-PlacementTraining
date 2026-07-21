#include<stdio.h>
#include<iostream>
using namespace std;

class abc
{
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
};

int main(){
    abc d;
    int a,b;
    printf("A value : ");
    cin>>a;
    printf("B value : ");
    cin>>b;
    d.add(a,b);
}
