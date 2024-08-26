#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
class Demo
{
    int *p;
    public:
    Demo()
    {
        p=new int[10];
        cout<<"constructor created"<<endl;
    }
    ~Demo()
    {
        delete []p;//now whenever we create memory inside class dynamically it must be delted in 
                   //destructor otherwise objected may be deleted but that memory may remain 
                   //and can cause memory leakage 
        cout<<"constructor deleted"<<endl;
    }
};
void fun()
{
    Demo *p=new Demo(); 
    delete p;
}
int main()
{
    fun();
}

/*
Refering to 1_Intro if we are creating object in stack but also creating memory inside constructor
also then we must delete it inside destructor 
class Demo
{
    int *p;
    public:
    Demo()
    {
        p=new int[10];
        cout<<"constructor created"<<endl;
    }
    ~Demo()
    {
        delete []p;//now whenever we create memory inside class dynamically it must be delted in 
                   //destructor otherwise objected may be delet but that memory may remain 
                   //and can cause memory leakage 
        cout<<"constructor deleted"<<endl;
    }
    void fun()
    {
        Demo d;
    }
};
*/