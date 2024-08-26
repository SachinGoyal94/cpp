#include<iostream>
#include<cmath>
using namespace std;
int main() {
int r;
int n;
cin>>n;
while(n>0)   //see this time we don't know how many steps will be taken to cmplt process so while used 
{
    r=n%10;
    n=n/10;
    cout<<r;
}
return 0;
}