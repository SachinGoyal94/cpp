#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
class Test
{
    private:
    int x,*p;
    public:
    Test(int a)
    {
        x=a;
        p=new int[x];  //creates an array of size x
    }
    Test(Test &t)
    {
        x=t.x;
        p=t.p; // it will do copy of above constructor but will also point to same array of above constructor
        //p=new int[x];  this will create a new array of size x for this copying constructor 
    }
};
int main()
{
    Test t(5);
    Test t2(t);
    return 0;
}