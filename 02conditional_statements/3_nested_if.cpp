#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main() {
 
    int a,b,c;
    cin>>a>>b>>c;
   
   float d,r1,r2;
    
    d=b*b-4*a*c;
    
    if(d==0)
    {
        r1=-b/(2*a);
        cout<<"real and equal "<<r1<<endl;
    }
    else
    {
        if(d>0)
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            cout<<"real and unequal "<<r1<<endl<<r2<<endl;
        }
        else
        {
            cout<<"imaginary";
        } 
    return 0;
    }
}