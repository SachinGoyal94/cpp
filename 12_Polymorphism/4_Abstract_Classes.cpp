//Notebook
/* Pure virtual function 
any function which is declared virtual and has no body 
but the deriving class must override it 
*/

/* Abstract Class
class which has atleast 1 pure virtual function is called Abstract Class
*/

/* in Abstract class you can use base class pointer derived Base *b=new Derived()not Base b i.e. object for that 
class cannot be created 
if a class is inheriting from abstract class then it also become abstract until unless 
it override function then it will be concrete (if no virtual function present in class which is inheriting)
*/

#include<bits/stdc++.h>
using namespace std;
class Parent
{
    public:
    void fun1()
    {
        cout<<"not virtual ";
    }
   virtual void fun2()=0;     //abstract class 
    //pure virtual function , it is assigned zero because if only typed it will get scope resoltuion as 
    //virtual void fun2(); 
    //so assigned zero
};

class Child:public Parent
{
    public:
    void fun2()
    {
        cout<<"function overrided now";   //concrete class
    }
};
int main()
{
    Parent *p;                                                    
    p=new Child();
    p->fun2();
    // Parent z; see it's giving error 
    return 0;
}