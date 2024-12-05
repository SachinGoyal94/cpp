#include<bits/stdc++.h>
using namespace std;
class times
{
    private:
    int h,m,s;
    public:
    times(int x=0,int y=0,int z=0) 
    {
        h=x;
        m=y;
        s=z;
    }
    times operator+(times & d)
    {
        s+=d.s;
        if(s>=60)
        {
            s%=60;
            m++;
        }
        m+=d.m;
        if(m>=60)
        {
            m%=60;
            h++;
        }
        h+=d.h;
    }
    void show()
    {
        cout<<"distance in hour, min= "<<h<<"  "<<m<<"   "<<s<<endl;
    }
};
int main()
{
    times l(10,10,10),M(11,55,51);
    M+l;
    M.show(); 
    l.show();
}