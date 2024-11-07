#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
class Test
{
    public:
    int x,*p;
    Test(int a,int b)
    {
        x=a;
        p=new int(b);
    }
    Test(const Test &t)
    {
        x=t.x;
        p=new int(*t.p); // we took value of p of object t and put that into copying object at any random location with same value 
    }
    void print()
    {
        cout<<x<<"   "<<*p<<"    "<<p<<endl;
    }
    ~Test()
    {
        delete p;
    }
};
int main()
{
    Test t(5,10);
    t.print();
    Test t2(t);
    t2.print();

    Test *a= new Test (6,12);
    Test b=*a;
    b.print();
    delete a;    
    b.print(); // no garbage value and it returns 12
}