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
void fun()
{
    Demo *p=new Demo(); //Demo class pointer and creating object of Demo dynamically i.e. in heap
    //now only constructor will be called to call destuctor delete is required
    delete p;
}
int main()
{
    fun();
    Demo *q;  //corrected one is Demo *q=new Demo();
    delete q;
}