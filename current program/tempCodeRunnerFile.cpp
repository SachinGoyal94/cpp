#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
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
   friend Rational operator+(Rational r1,Rational r2);
   friend ostream & operator<<(ostream &o,Rational &r);
};
Rational operator+(Rational r1,Rational r2)
{
   Rational r;
   r.num=(r1.num*r2.den)+(r2.num*r1.den);
   r.den=(r1.den*r2.den);
}
ostream & operator<<(ostream &o,Rational &r)
{
   o<<r.num<<"  / "<<r.den;
}
int main()
{
   Rational r1(4,6),r2(8,10),r;
   r=r1+r2;
   cout<<r;
}
