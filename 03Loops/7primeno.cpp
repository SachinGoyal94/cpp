#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cout<<"we are going to check if n is a prime no or not   ";
cin>>n;
int count=0;
for(int i=1;i<=n;i+=1)
{
    if(n%i==0)
    {
        count+=1;
    }
    }      

if(count==2)
{
    cout<<n<<"is a prime number"<<endl;
}
else{
    cout<<n<<"is not a prime number";
}
return 0;
}

