#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int g=10;  //gloabal variable can be used anywhere and does not terminate till whole function ends
void fun()
{
    int a=100;  //local variable and teminate after function ends
    cout<<g<<endl;
}
int main()
{
    int m=12;  //local variable
    cout<<m<<endl;
    fun();
    return 0;
}