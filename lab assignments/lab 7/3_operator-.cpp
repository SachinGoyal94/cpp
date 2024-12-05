#include<bits/stdc++.h>
using namespace std;
class distances
{
    private:
    int inch,feet;
    public:
    distances(int X=0,int Y=0) 
    {
        feet=Y;
        inch=X;
    }
    distances operator-()
    {
        feet-=feet;
        inch-=inch;
        return *this;
    }
    /*
    or
    void operator-()
    {
        feet-=feet;
        inch-=inch;
    }*/
    void show()
    {
        cout<<"distance in inch , feet= "<<inch<<"  "<<feet<<endl;
    }
};
int main()
{
    distances l(10,5),M(11,8);
    l.show();
    -l; 
    l.show();
}