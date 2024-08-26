#include<iostream>
#include<climits>
#include<cmath>
#include<cstring>
class Parent
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void fun()
    {
        a=100; //private accesible inside base class
        b=200;
        c=300;
    }
};
class Child:protected Parent
{
    private:
    protected:
    public:
    void funChild()
    {
        //a=5;     //private not accesible inside derived class
        b=6;
        c=10;
    }
};
class Grandchild:public Child
{
    public:
    void funGrand()
    {
        //a=10;  //private not accesible inside derived class
        b=7;
        c=8;
    }
};
int main()
{
    Child c;
    //c.a=1000;     //private not accesible inside main
    //c.b=2000;     //protected not accesible inside main
    //c.c=3000;     //protected not accesible inside main
}