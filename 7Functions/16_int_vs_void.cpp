#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int g=1000; 
void fun()
{
    int g=50;
    {
        int g=80;
        cout<<g<<endl;
        cout<<::g<<endl;
    }
    cout<<g;
}
int main()
{
    int g=10;
    g++;
    cout<<"local variable g= "<<g<<endl;
    cout<<"to get value of global variable g we need to use ::variable_name"<<endl;
    cout<<::g<<endl;
    fun();
}

//now see we use formal functions so that they perform a specific function and their return will decide 
//which sub-function will be used in main function like addition subtraction going simuntaneously 
//in formal function  but here there is no specific/logical function performed in formal function 
//instead they are just printing values which can be done in main function without any formal function
//for which we can use it in main function so no return value thus void 