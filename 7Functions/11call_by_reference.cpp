/*in call by address we used pointers but now we will use reference*/
#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;  
int swap(int &a,int &b) //only difference in call by value and in reference 
{                       //modification in actual parameter is also possible
    int c;              //here in call by reference we can't make formal function complex like using loop 
    c=a;                //compiler will convert call by reference into call by address 
    a=b;
    b=c;
    cout<<&a<<"   "<<&b<<"     "<<endl;
    cout<<a<<"   "<<b<<"     "<<endl;
    return c;
}
int main() {
    int x=10,y=20,z;
    z=swap(x,y);
    cout<<&x<<"  "<<&y<<endl;
    cout<<x<<"  "<<y;
}