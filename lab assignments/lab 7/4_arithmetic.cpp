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
    distances operator+(distances & d)
    {
        feet+=d.feet;
        inch+=d.inch;
        return *this;
    }
    distances operator-(distances & d)
    {
        feet-=d.feet;
        inch-=d.inch;
        return *this;
    }
    distances operator*(distances & d)
    {
        feet*=d.feet;
        inch*=d.inch;
        return *this;
    }
    distances operator*(int prod)
    {
        feet*=prod;
        inch*=prod;
        return *this;
    }
    void show()
    {
        cout<<"distance in inch , feet= "<<inch<<"  "<<feet<<endl;
    }
};
int main()
{
    distances l(10,5),M(11,8);
    M+l;
    M.show(); 
    l.show();
    M-l;
    M.show(); 
    l.show();
    M*l;
    M.show(); 
    l.show();
    M*2;
    M.show(); 
    l.show();
    
}