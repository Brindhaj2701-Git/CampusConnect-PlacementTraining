#include<stdio.h>
#include<iostream>
using namespace std;

class parent
{
    public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
};

class child1 : public parent
{
    public:
    void sub(int a,int b){
        cout<<a-b<<endl;
    }
};

class child2 : public parent
{
    public:
    void mul(int a,int b){
        cout<<a*b<<endl;
    }
};

int main(){
    child1 ch1;
    ch1.add(10,40);
    ch1.sub(30,10);

    child2 ch2;
    ch2.add(90,30);
    ch2.mul(2,5);
}