#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int main() {
    float d;
    int a=2,b=10;
    d=int(sqrt(a*b)); //using int() or (int)sqrt(a*b) is typecasting and is used to change datatype
    cout<<"d="<<d<<endl;


    float g=15e2f;
    cout<<g<<endl;

    float h=15e-2f;
    cout<<h<<endl;



    int k,n;
    float term;
    cin>>k;
    cin>>n;
    term=k+(n-1)*d;
    cout<<"term value is"<<term<<endl;


     //How to use power function=> pow(b,x)  b=base  x=power
    int c=2;
    d=(-b+sqrt(pow(b,2)-4*a*c)/(2*a));
    cout<<d;
    return 0;
}