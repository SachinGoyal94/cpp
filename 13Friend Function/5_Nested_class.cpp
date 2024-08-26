/*  Nested class 
Inner class can access only static members of outer class 
outer class can access public members of inner class and it can create object of inner class 
after defining inner class 
*/


#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class Base
{
   public:
   static int a;
   class Test
   {
      public:
      int b=20+a;
   };
   Test i;
};
int Base::a=9;
int main()
{
   Base::Test t; //for creating object of inner class inside main use scope resolution
   cout<<t.b;
}