//we can throw object or constructor of a class
#include<bits/stdc++.h>
using namespace std;
class MyException:exception //exception is inbuilt class we may use it or may not use it no effect
{};
int main()
{
    int a=10,b,c;
    cin>>b;
    MyException g;
    try
    {
        if(b==0)    
        {
            throw g; //here throwing object of class MyException
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


