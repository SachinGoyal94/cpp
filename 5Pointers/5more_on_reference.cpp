#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int x=10;
    int &p=x;
    
    
    cout<<&p<<endl;  
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    
    
    x++;
    cout<<&p<<endl;
    cout<<x<<endl;
    cout<<p<<endl;


    p++;
    cout<<&p<<"  "<<&x<<endl;
    cout<<x<<endl;
    cout<<p<<endl;


    p=p+x;
    cout<<&p<<endl;
    cout<<x<<endl;
    cout<<p<<endl;

}