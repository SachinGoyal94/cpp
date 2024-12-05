#include<bits/stdc++.h>
using namespace std;
class distances
{
    private:
    int x,y;
    public:
    distances(int X=0,int Y=0) 
    {
        x=X;
        y=Y;
    }
    friend distances operator+( distances d1 ,distances d2 );
    void show()
    {
        cout<<"distance in x,y= "<<x<<"  "<<y<<endl;
    }
};
distances operator+( distances d1 ,distances d2 )
{
    distances temp;
    temp.x=d1.x+d2.x;
    temp.y=d1.y+d2.y;
    return temp;
}
int main()
{
    distances l(10,5),k(6,7),M;
    M=l+k; 
    M.show();
}