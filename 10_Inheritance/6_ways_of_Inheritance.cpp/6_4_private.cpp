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
class Child:private Parent
{
    private:
    protected:
    public:
    void funChild()
    {
        //a=5;     //private of parent not accesible inside derived class
        b=6;       //here it is becoming private not private of parent so accesible 
        c=10;      //here it is becoming private not private of parent so accesible
    }
};
class Grandchild:public Child
{
    public:
    void funGrand()
    {
        //a=10;  //private not accesible inside derived class
        //b=7;   //here b is private of child so not accesible
        //c=8;   ////here c is private of child so not accesible
    }
};
int main()
{
    Child c;
    //c.a=1000;     //private not accesible inside main
    //c.b=2000;     //private not accesible inside main
    //c.c=3000;     //private not accesible inside main
}