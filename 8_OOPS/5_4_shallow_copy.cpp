//shallow copy because location of pointer p in both objects of Test is same
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
        p=t.p;
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
    delete a;    //here we deleted obejct a both x and pointer p gets delete
    b.print();   //but here we are printing b and here as same address of pointers so garbage value and random address 
                 //of pointer is returned so use deep copy constructor
    return 0;
}