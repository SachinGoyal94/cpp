/*
Polymorphism we redifne the functions according to our need 
Inheritance  we inherit functions from parent class into derived without overriding 
             and we also inherit parent constrcutor int derived constructor
*/


/*function overiding
suppose 2 cars both have same type of gear system(like mannual)
but if advanced car inheriting from basicar will make automatic gear system then that gear function
will get overided
similarly if we redefine any function it will create function overriding
for function overriding signature or prototype of function must be same otherwise it will become 
function overloading
*/

#include<bits/stdc++.h>
using namespace std;

class BasicCar
{
public:
 void start()
 {
 cout<<"Car started"<<endl;
 }
};


class AdvanceCar: public BasicCar
{
public:
 void start()
 {
 cout<<"function overrided"<<endl;
 }
};


class ADVANCECAR:public BasicCar
{
    public:
    void start(int x)  //function overloaded as not used  void start()
    {
        cout<<"function overloading ";
    }
};


int main()
{
    BasicCar q;
    q.start();
    
    cout<<"just one more example"<<endl;


    ADVANCECAR r;
    r.start(1);

    cout<<endl;
    // if we want to use start() function of basiccar for that use scope resolution

    r.BasicCar::start();    

}