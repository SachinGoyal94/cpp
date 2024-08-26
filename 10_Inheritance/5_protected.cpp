//  private  public protected

/* private is only accesible inside parent class
   protected is only accesible inside parent and child(i.e. derived class) class 
   public is accesible in parent child class and in object/main also
*/

#include <bits/stdc++.h>
using namespace std;

class Parent
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;

    void funbase()
    {
        a=10;
        b=20;
        c=23;
    }
};
class Child:public Parent
{
    public:
    void funderived()
    {
        //a=11;       //private not accesible inside child class
        b=22;
        c=33;
    }
};

int main()
{
    Parent x;
    //x.a=3;   //private not accesible inside main
    x.b=4;
    cout<<x.b;
    //x.c=5;   //protected not accesible inside main
    
    Child i;
    i.b=2;
    cout<<i.b;   
}