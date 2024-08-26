/*  now we will be using pointer to allocate already created object r1 this is called static object and both r1 
and pointer will be present in stack memory but address of the object r1 will be stored in heap  */
#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class Rectangle
{
    public:
    int lenght,breadth;
    int area()
    {
        int Area=lenght*breadth;
        return Area;
    }
};
int main()
{
    Rectangle r1;
    Rectangle *p=&r1;
    p->lenght=10;      //p->lenght means lenght in p is assinged 10
    p->breadth=5;
    cout<<p->area();
    return 0;
}
