#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
void fun(const int &x,const int &y)  
{
    //++x;
    //++y;
    cout<<x<<endl<<y<<endl;
}

int main()
{
    int a=10,b=20;
    fun(a,b);
}


