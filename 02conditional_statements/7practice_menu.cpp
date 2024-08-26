#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main() {
int Option;  
cin>>Option;    
cout<<"Menu"<<endl;
cout<<"options  :"<<endl;
cout<<"1.Add"<<endl;
cout<<"2.Subtract"<<endl;
cout<<"3.Multiply"<<endl;
cout<<"4.Divide"<<endl<<endl;
cout<<"Selected Option is"<<Option<<endl;  
int a=9,b=3,c;
switch(Option)
{
    case 1:c=a+b;
     cout<<c;
    break;
    case 2:c=a-b;
     cout<<c;
    break;
    case 3:c=a*b;
     cout<<c;
    break;
    case 4:c=a/b;
     cout<<c;
    break;
}
return 0;
}