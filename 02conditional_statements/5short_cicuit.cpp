#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main() {
 int a=10,b=5,c=8;
 /*if(b>a && ++c<a) if(++c<a && b>a) this time output will be 9 although if is false  
 {                but due to short ckt ++c<a is evaluate not b>a as its & operator 
    cout<<c;      so 0 && (either0or1)=0 
 }*/
 if( c++<a && b>a) 
 {                
    cout<<c;  
 }
 cout<<c;
}
 