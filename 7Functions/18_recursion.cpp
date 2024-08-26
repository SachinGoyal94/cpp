//any function which calls itself is called recusive function 
//like here fun(int n) is called again and again

#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int x=5;
    fun(x);
}
