/* we can have multiple or overloading  construtor and only one destructor and 
both cannot return anything
all rules of constructor applicable on destructor also*/

#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
class Demo
{
    public:
    Demo()
    {
        cout<<"constructor created"<<endl;
    }
    ~Demo()
    {
        cout<<"constructor deleted"<<endl;
    }
};
void fun()
{
    Demo d; //as object created in stack so no need to call destructor
    //also function ends destructor will be called but logically destructor is called 
    //before end of object life
    //and for gloabal object desturctors are called just before end of program
}
int main()
{
    fun();
}