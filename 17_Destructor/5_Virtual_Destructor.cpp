//now destructor of demo will be called bcs compiler will assume that object is of demo class 
//as demo class pointer is used so to call destructor of derived then demo we will make
//destructor of demo virtual
//we are doing this achieve run time polymorphism
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
    virtual ~Demo()  //if not virtual destructor of derived will not be called 
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
        cout<<"constructor of Derived delted"<<endl;
    }
};
int main()
{
    Demo *p=new Derived();
    delete p;
    //now destructor of demo will be called bcs compiler will assume that object is of 
    //demo class as demo class pointer is used so to call destuctor of derived and to 
    //make program work normally then destructor of demo is made virtual 
    //abstract class must have virtual destructor
}