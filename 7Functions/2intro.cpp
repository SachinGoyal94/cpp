#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    int d;
    d=a-b;
    return c;
    return d;
}
int main() {
    int x=10,y=15,z;
    z=add(x,y);
    cout<<z;      //see still 2 type operations done in add() sunction but as return c is typed first so 
    return 0;   //as c=a+b i.e. addition happens so here also addition happens instead of subtraction as in d
}                 //now return is imp part of secondary function generally cout cin 
                  //is not used in formal function