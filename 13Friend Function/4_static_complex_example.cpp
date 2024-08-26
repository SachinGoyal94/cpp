/* now let thapar fees increase every year by 1 lakh 
*/

#include<bits/stdc++.h>
using namespace std;
class Fees
{
    private: 
    int fee=100000;
    public:
    static int donation;
    Fees()
    {
        donation+=10000;
        fee+=donation;
    }
    int getfee()
    {
        return fee;
    }
};
int Fees::donation=0;
int main()
{
    cout<<"fees in starting = fees+donation = ";
    Fees year_starting;
    cout<<year_starting.getfee()<<endl;
    cout<<"donation fee for first year="<<Fees::donation<<endl;


    cout<<"fees for 2nd year= ";
    Fees year2;
    cout<<year2.getfee()<<endl;
    cout<<"donation in second year= "<<Fees::donation<<endl; 
}