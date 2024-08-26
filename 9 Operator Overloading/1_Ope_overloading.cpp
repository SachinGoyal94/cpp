/* like int is a datatype there is no complex datatype in c++ 
operators can be overloaded using member or friend
scope resolution cannot be overloaded
*/

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
    Complex operator+(Complex x)  //instead of operator+ add can be typed so to use as a function
    {                             //thus operator+ is called oveloading
        Complex temp;             
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
    int getreal()
    {
        return real;
    }
    int getimg()
    {
        return img;
    }
};
int main()
{
    Complex c1(4,5),c2(4,8),c3;
    c3=c1+c2;  //c2 wil be getting add in c1
    cout<<c3.getreal()<<" +  i "<<c3.getimg();
    return 0;
}


//getting output in another way
/* type this inside class
void display()
{
    cout<<real<<"  +   i  "<<img;
}   

and type this in int main()
c3.display();

no need of get real get img functions

*/