//friend function= any function which is accessing members of more than 2 classes
//it must be written outside class without scope resolution

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
    friend Complex operator+(Complex c1,Complex c2); 
    int getreal()    //friendComplexoperator+(Complex c1,Complex c2);is called signature or prototype of friend function
    {
        return real;
    }
    int getimg()
    {
        return img;
    }
};
Complex operator+(Complex c1,Complex c2)      //as we are declaring outside class so 2 inputs taken
{
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}
int main()
{
    Complex c1(4,5),c2(4,8),c3;
    c3=c1+c2;  //c2 wil be getting add in c1
    cout<<c3.getreal()<<" +  i "<<c3.getimg();
    return 0;
}