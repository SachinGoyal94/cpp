/* now we know that we can inherit private member but can't access it in any another class/function
but we can access private in same class/function so for that friend is used and friend functions 
are global functions
*/
//Program for friend function

#include<bits/stdc++.h>
using namespace std;
class Base
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void fun();  
};
void fun()
{
    Base x;
    x.a;
    x.b;     
    x.c;
}
int main()
{
    cout<<"Program over";
}
