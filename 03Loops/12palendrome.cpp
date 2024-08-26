#include<iostream>
#include<cmath>                  //palindrome  1221(before reversing)=1221(after reversing)
using namespace std;
int main() {
int n;
cin>>n;
int r,rev=0,m=n;
while(n>0)
{
    r=n%10;
    n=n/10;
    rev=rev*10+r;
}
if(rev==m)
{
    cout<<m<<"  is a palindrome";
}
return 0;
}