

//topic of polymorphism but included in functions
#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int (*fp)(int,int);
    fp=max;
    (*fp)(10,20);
    cout<<*fp<<endl;
    fp=min;
    (*fp)(10,20);
    cout<<*fp<<endl;
    return 0;
}
