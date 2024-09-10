//Notebook
//void fun() throw will not throw anything
//Exceptons are raised by program 
#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
int main()
{
    int a=10,b,c;
    cin>>b;
    try
    {
        if(b==0)    
        {
            throw 10;
        }
        else
        {
            c=a/b;
            cout<<"No error"<<c<<endl;
        }
    }
    catch(int e)
    {
        cout<<"divison by zero and error code is "<<e;
    }
}




/* method 2
also we can throw any data type like string float double just modify catch(int)=>catch(datatype used)
int division(int x,int y)
    {
        if(y==0)
        {
            throw string("MY name is Sachin");
        }
        else
        {
            return x/y;
        }
    }
int main()
{
    int a=10,b,c;
    cin>>b;
    
    try
    {
        c=division(a,b);
        cout<<c;  //if b=0 try will directly move to catch so no tension of cout<<c not in else
    }
    catch(string e)
    {
        cout<<"divison by zero and error code is "<<e;
    }
    return 0;
}

*/