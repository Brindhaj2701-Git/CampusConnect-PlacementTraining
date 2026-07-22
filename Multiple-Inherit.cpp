#include<stdio.h>
#include<iostream>
using namespace std;

class parent1
{
    public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
};

class parent2
{
    public:
    void sub(int a,int b){
        cout<<a-b<<endl;
    }
};

class child : public parent1,public parent2
{
    public:
    void mul(int a,int b){
        cout<<a*b<<endl;
    }
};

int main(){
    child ch;
    ch.add(10,40);
    ch.sub(30,10);
    ch.mul(2,5);
}