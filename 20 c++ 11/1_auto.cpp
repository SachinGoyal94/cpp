#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
#include<fstream>
using namespace std;
float fun()
{
    return 2.54f;
}
int main()
{
    auto x=2*5.7+'a';
    cout<<x<<endl;

    auto c=fun();
    cout<<c<<endl;

    int k=9;

    decltype(k) z=10.2; //z will capture the data of k using decltype==declare type
    cout<<z;


}