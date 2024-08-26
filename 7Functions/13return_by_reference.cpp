#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int & fun(int &a)
{
    cout<<a<<endl;
    return a;
}
int main()
{
    int x=10;
    cout<<x<<endl;
    fun(x)=25;
    cout<<x<<endl;
}

/*firstly int &a will be like reference to  int x=10 then cout<<a will give output of int x=10
now when fun(x)=25 using formal function x=25*/