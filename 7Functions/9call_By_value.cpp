#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;  
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<a<<"   "<<b<<"     "<<endl;
    return c;
}
int main() {
    int x=10,y=20,z;
    z=swap(x,y);
    cout<<x<<"  "<<y;
}
//here we need to swap 
//the first function which is not main then input in that is called formal parameters 
//and in main actual parameters 
//using call by value we can modify formal parameters but not actual parameters