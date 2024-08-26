//  input stream cin >>       extraction
//  output stream cout<<       insertion

#include<bits/stdc++.h>
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
    friend void operator<<(ostream &o,Complex &c);   //as ostream and complex both are 2 differet object 
};                                                   //so friend used not complex used    
void operator<<(ostream &o,Complex &c)      
{
    o<<c.real<<" i  + "<<c.img<<endl;     //instead of cout   o   used 
}
int main()
{
    Complex c1(4,5);
    cout<<c1; //here it will give error if we will try to pring something else also with c1 like cout<<c1<<endl;
    operator<<(cout,c1);   //both cout<<c1   operator<<(cout,c1)  are same 
}