#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
class Demo
{
    public:
    Demo()
    {
        
        cout<<"constructor created"<<endl;
    }
    ~Demo()
    {
        cout<<"constructor deleted"<<endl;
    }
};
class Derived:public Demo
{
    public:
    Derived()
    {
        cout<<"constructor of Derived"<<endl;
    }
    ~Derived()
    {
        cout<<"constructor of Derived deleted"<<endl;
    }
};
int main()
{
    Derived d;//constructor of demo then derived both are called
    //now program is ended 
    //as object is created inside stack so destuctor will be called automatically
    //firstly destructor of derived and then of demo is called 

}