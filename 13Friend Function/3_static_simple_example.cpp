//prize will remain same for every buyer
#include<bits/stdc++.h>
using namespace std;
class Innova
{
    public:
    static int price;
    static int getprice()
    {
        return price;
    }
};
int Innova::price=200000;
int main()
{
    Innova I1,I2;
    cout<<I1.getprice()<<endl;
    cout<<I2.price;
}