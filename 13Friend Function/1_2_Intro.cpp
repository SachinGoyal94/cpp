//Program for friend class
#include<bits/stdc++.h>
using namespace std;
class Derived;   //we have to define class Derived before Base class
class Base
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend Derived;
};
class Derived
{
    Base x;
    void fun()
    {
        x.a;
        x.b;
        x.c;
    }
};
int main()
{
    cout<<"Program over";
}
