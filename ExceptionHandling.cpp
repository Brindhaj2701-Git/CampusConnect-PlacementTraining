#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    try{
        int a = 10;
        int b = 0;
        if(b==0){
            throw runtime_error("Divide by error");
        }
        float c = a/b;
    }
    catch(const std :: exception& error)
    {
        cout<<"Error : "<<error.what();
    }
}