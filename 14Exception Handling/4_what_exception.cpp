#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class MyException:public exception // if i want to override function i can override it
{
    public:
    char * what()
    {
        throw"MyException";
    }
};
int main()
{
    int a=10,b,c;
    cin>>b;
    try
    {
        if(b==0)    
        {
            throw MyException();
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

