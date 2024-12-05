//write a program to find sum of 2 rational numbers 

#include<iostream>
#include<cmath>
#include<cstring>
#include<climits>
using namespace std;
class Rational
{
    private:
    int num,den;
    public:
    Rational(int n=0,int d=1)
    {
        num=n;
        den=d;
    }
    friend Rational operator+(Rational c1,Rational c2);
    void display()
    {
        cout<<"num of rational no =  "<<num<<endl<<"den of rational no = "<<den;
    }
};
Rational operator+(Rational c1,Rational c2)
{
    Rational temp;
    temp.num=c1.num*c2.den+c2.num*c1.den;
    temp.den=c1.den*c2.den;
    return temp;
}
int main()
{
    Rational c1(4,5),c2(8,9),c3;
    c3=c1+c2;
    c3.display();
}