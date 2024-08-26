#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class Parent
{
    public:
    void fun1();
    void fun2();
    void fun3();
};
class Child:public Parent
{
    public:
    void fun4();
    void fun5();
};
int main()
{
    
    Child d;
    Parent *p=&d;
    //here *p=&d does allocate memory to stack
    p->fun1();
    p->fun2();
    p->fun3();

    return 0;
}