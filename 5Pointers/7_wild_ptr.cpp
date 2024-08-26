// *p=&x    &x in stack so no need to use delete p; will work for heap
//use nullptr not NULL nullptr more safe

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int x=10;
    int *p=&x;
    
    cout<<*p<<"   "<<p<<endl;
    
    p=nullptr;
    cout<<"is p still in memory "<<p<<endl;
    
    p=&x;
    cout<<"is p still in memory "<<p<<endl;

    delete p;
    cout<<"is p still in memory "<<p<<endl; //see memory leakage

    p=nullptr;
    cout<<"is p still in memory "<<p<<endl;
    int a=10;    
    //*p=&a;        //error p is nullptr can't point to anythin now
    cout<<*p<<endl;
    cout<<"check";
    

}