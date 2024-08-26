#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin>>n;
int multi=1;
for(int i=1;i<=n;i+=1)
{
    multi=i*multi;
}
cout<<multi;
return 0;
}