#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin>>n;
int sum=0;
cout<<"sum+i"<<endl;
for(int i=1;i<n;i+=1)
{
    sum=sum+i;                //for the current ongoing loop sum stores its previous loop value 
    cout<<sum<<endl;
}
cout<<endl;
cout<<sum<<endl;
return 0;
}