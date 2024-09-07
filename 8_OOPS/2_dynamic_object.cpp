/* just suppose teacher wants to call you towards her table then either she will call you by your name 
or she will point at you in 1_intro we called using name and Rectangle r1 was stored in stack here we will
point towards the object and it will be created in heap(   Rectangle *p=new Rectangle()   )
also objects in heap does not have any name so we didn't gave any name to object new Rectangle()*/

/* here we will be allocating a object directly to a pointer thus this is called dynamic object */

#include<bits/stdc++.h>
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
    Rectangle *p=new Rectangle();    
    p->lenght=10;      //p->lenght means lenght in p is assinged 10
    p->breadth=5;
    cout<<p->area();
    delete p;//in dynamic memory have to call the destructor unlike in stack where it's automatic call for destructor
    return 0;
}
