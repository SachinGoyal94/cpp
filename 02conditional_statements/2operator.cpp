#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int main() {
    int x=4,y=4,z=5,a=3;
    if(x==y && z>a)     //(x==y && z>a)  this is called compound statement 
    {
        cout<<"other logical operators are || ^"<<endl;
        cout<<"other relational operators are  > < => == <= !="<<endl;
    }
    else
    {
        cout<<"kuch bhi";
    }
}