#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int main() {
    int i,j;
    i=10;
    j=4;
    i+=j;
    cout<<i<<endl;




    int p,q,r,s; //proper explanation in c++ concept notes
    p=10;
    q=4;
    r=5;
    s=2;
    p+=q;
    p+=r;
    p+=s;
    cout<<p<<endl;



    int x,y,z; 
    x=10;
    y=4;
    z=++x;
    cout<<x<<"     "<<z<<endl;
    z=x++;
    cout<<x<<"    "<<z<<endl;
    z=x++*y;
    cout<<x<<"    "<<y<<"       "<<z<<endl;
    z=++x*y;
    cout<<x<<"    "<<y<<"       "<<z<<endl;


    int e,f;
    e=10;
    f= 2 * e++ + 2 * ++e;  
    cout<<f;
    return 0;
 
}