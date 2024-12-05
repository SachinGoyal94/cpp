#include<bits/stdc++.h>
using namespace std;
int division(int x,int y)throw(int)   //throw int just signify that this function is used for 
{                                     //throwing ,if not throwing anything just type throw() 
    if(y==0)                          //not compulsory to write throw(int)
    {
        throw 0;
    }
    else{
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
        cout<<"No error"<<c<<endl;
    }
    
    catch(int e)
    {
        cout<<"divison by zero and error code is "<<e;
    }
}

