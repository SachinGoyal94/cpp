#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin>>n;
int r,m=n,sum=0;
while(n>0)
{
    r=n%10;
    n=n/10;
    sum=sum+r*r*r;   
}
if(sum=m)   //armstrong number is if sum of digits raise to power total digits  of a no is=number 
{           //like 153 so cube is done on every digit
    cout<<sum;
}
return 0;
}