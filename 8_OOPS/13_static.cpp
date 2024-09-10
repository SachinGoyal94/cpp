#include<bits/stdc++.h>
using namespace std;
class sample
{
    public:
    static int a,b;
    static void print()  
    {
        cout<<a<<"   "<<b<<endl;
    }
};

class sample2{
    public:
    int x,y;
    static void printer()
    {
        cout<<"static function can only use static data members"<<endl;
    }
};
int sample::a;
int sample::b;
int main()
{
    sample c;
    c.a=111;
    c.b=222;
    c.print();
    sample c1;
    c1.a=11;
    c1.b=22;
    c.print();
    c1.print();

    sample2 d;
    d.printer();
}
