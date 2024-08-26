//  input stream cin >>       extraction
//  output stream cout<<       insertion

#include<iostream>
#include<cmath>
#include<cstring>
#include<climits>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend ostream & operator<<(ostream &o,Complex &c); 
};                                                        
ostream & operator<<(ostream &o,Complex &c)      
{
    o<<c.real<<" i  + "<<c.img<<endl;
    return o;
}
int main()
{
    Complex c1(4,5);
    cout<<c1<<endl;
    operator<<(cout,c1);
}