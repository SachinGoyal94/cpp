
//runtime polymorphism vs  compile time polymorphism
//in runtime poly..With base call pointer you can hold objects of many subclasses and take the benefit of 
//common things.
//but in compile time poly..we use normal function overriding without using base class pointer 



/* Polymorphism allows us to reuse code by creating one function that's usable for multiple uses
for ex you have 2cars and everytime you start engine of any car you want to get notification on your phone
so making 2 apps for 2 cars is timewasting but using polymorphism you can create 1 app for as manys car your want 
*/

#include<bits/stdc++.h>
using namespace std;

class BasicCar
{
   public:
   virtual void start()
   {
   cout<<"Car started"<<endl;
   }
   virtual void stop()
   {
      cout<<"car stopped"<<endl;
   }
};


class Innova:public BasicCar
{
   public:
   void start()
   {
   cout<<"Innova started"<<endl;
   }
   void stop()
   {
      cout<<"Innova stopped"<<endl;
   }
};
class Fortuner:public BasicCar
{
   public:
   void start()
   {
   cout<<"Fortuner started"<<endl;
   }
   void stop()
   {
      cout<<"Fortuner stopped"<<endl;
   }
};

int main()
{
    BasicCar *q;
    q=new Innova();
    q->start();

    q=new Fortuner();
    q->start();

}