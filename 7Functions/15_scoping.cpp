#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int g=1000; 
int main()
{
    int g=10;
    g++;
    cout<<"local variable g= "<<g<<endl;
    cout<<"to get value of global variable g we need to use ::variable_name"<<endl;
    cout<<::g;
}