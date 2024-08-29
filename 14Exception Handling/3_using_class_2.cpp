#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class MyException:exception //exception is inbuilt class we may use it or may not use it no effect
{};
int main()
{
    int a=10,b,c;
    cin>>b;
    try
    {
        if(b==0)    
        {
            throw MyException();//here throwing constructor of class Myexception
        }
        else
        {
            c=a/b;
            cout<<"No error"<<c<<endl;
        }
    }
    catch(MyException e)
    {
        cout<<"divison by zero  ";
    }
}


