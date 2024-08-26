#include<iostream>
#include<cmath>
using namespace std;
int main() {
int r,k,reve=0;
int n,m,rev=0;
cin>>n;
while(n>0)     
{
    r=n%10;
    n=n/10;
    rev=rev*10+r;
}
cout<<rev<<endl;
while(rev>0)     
{
    k=rev%10;
    rev=rev/10;
    reve=reve*10+k;
    switch(k)
    {
        case 1:cout<<"one"<<endl;
        break;
        case 2:cout<<"two"<<endl;
        break;
        case 3:cout<<"three"<<endl;
        break;
        case 4:cout<<"four"<<endl;
        break;
        case 5:cout<<"five"<<endl;
        break;
        case 6:cout<<"six"<<endl;
        break;
        case 7:cout<<"seven"<<endl;
        break;
        case 8:cout<<"eight"<<endl;
        break;
        case 9:cout<<"nine"<<endl;
        break;
    }
}
return 0;
}