#include<stdio.h>
#include<iostream>
using namespace std;

class parent{
    public:
    void display(){
        cout<<"I am Parent Class..."<<endl;
    }
};

class child1 : public parent{
    public:
    void dischild1(){
        cout<<"I am Child 1..."<<endl;
    }
};

class child2 : public child1{
    public:
    void dischild2(){
        cout<<"I am Child 2..."<<endl;
    }
};

int main(){
    child2 ch;
    ch.display();
    ch.dischild1();
    ch.dischild2();
}