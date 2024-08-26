#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;        
    }
}
int main()
{
    int x=5;
    fun(x);   
}

/* now look when at last fun n-1=1-1=0 no further recursion will happen so cout will be performed
so simply whenever recursion was going on the output was geting stored in stack and at end when n=0
if condition got false then it moved to cout<<n<<endl and at that time 1 was in action as n=1
1-1=0 so output =1 in the same way last second output was 2 then 3 4 5 
actually it is using concept of stack last in first out*/