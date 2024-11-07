/* now just refer to word file multipath where class d is getting inherit from b,c and these two getting 
inherit from A then ambiguity can be there

ambiguity means single statement having more than one meaning 

but how ambiguity 
here a=10 in parent so in child as well as in grandchild 
but they are declaring it as a=23 a=55 so when test will inherit from child grandchild 
it will cause ambiguity as a=23 and a=55 for test but if we will declare child grandchild as virutal
these child grandchild  will not get implemented for test but a=10 as both inherit a=10 from parent


so class b,c are virtually inheriting class a
virtual when base class does not need implementation but derived class requires */

#include<bits/stdc++.h>

using namespace std;
class Parent
{
    public:
    int a = 10;
};

class Child:virtual public Parent //on removing virtual a=10 but a=23 that cause ambiguity  
{                                
    public:
    void fun()
    {
        a=23;
    }

};
class GrandChild:virtual public Parent  //on removing virtual a=10 but a=55 also that is ambiguity
{
    public:
    void fundisplay()
    {
        a=55;
    }
    
};
class Test: public Child,GrandChild
{

};

int main()
{
    Test c;
    cout<<c.a;

    cout<<endl;

    //but what if we want to get output from fun function inside child or from fundisplay grandchild
    c.fun();
    cout<<c.a;
}