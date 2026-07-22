#include<stdio.h>
#include<iostream>
using namespace std;

class parent
{
    public:
    void display(){
        cout<<"This is Parent Class"<<endl;
    }
};

class child : public parent
{
    public:
    void display1(){
        cout<<"This is Child Class"<<endl;
    }
};

int main(){
    child obj;
    obj.display1();
    obj.display();
}